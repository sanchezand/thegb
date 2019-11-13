#include "Cartridge.h"

Cartridge::Cartridge(const char* path) {
	this->path = path;
}

bool Cartridge::read() {
	if (this->loaded) return true;
	FILE *cfile;
	fopen_s(&cfile, this->path, "rb");
	if (cfile == nullptr) return false;

	fseek(cfile, 0, SEEK_END);
	this->cartSize = ftell(cfile);
	fseek(cfile, 0, SEEK_SET);
	this->bytes.clear();
	this->bytes.resize(this->cartSize);
	fread(&this->bytes[0], this->cartSize, 1, cfile);
	fclose(cfile);

	this->loaded = true;

	return true;
}

uint8_t Cartridge::getAddress(int dir) {
	if (!this->loaded)return 0x00;
	return bytes[dir];
}

void Cartridge::dumpCart() {
	const int N = 16;
	const char hex[] = "0123456789ABCDEF";
	char buf[N * 4 + 5 + 2];
	for (int i = 0; i < this->bytes.size(); ++i){
		int n = i % N;
		if (n == 0){
			if (i) puts(buf);
			memset(buf, 0x20, sizeof(buf));
			buf[sizeof(buf) - 2] = '1';
			buf[sizeof(buf) - 1] = '\0';
		}
		uint8_t c = (uint8_t)this->bytes[i];
		buf[n * 3 + 0] = hex[c / 16];
		buf[n * 3 + 1] = hex[c % 16];
		buf[3 * N + 5 + n] = (c >= ' ' && c <= '~') ? c : '.';
	}
	puts(buf);
}

const char* Cartridge::getTitle() {
	string title;
	for (int i = 0x134; i < 0x143; i++) {
		title += this->getAddress(i);
	}
	return title.c_str();
}

char Cartridge::cbgFlag() {
	return this->getAddress(0x143);
}

char Cartridge::sgbFlag() {
	return this->getAddress(0x146);
}

Cartridge_Type Cartridge::getType() {
	if (this->type != NULL) return this->type;

	char type = this->getAddress(0x147);
	switch (type) {
	case 0x00: this->type = ROM_ONLY;
		break;
	case 0x01: this->type = MBC1;
		break;
	case 0x02:
	case 0x03: this->type = MBC1_RAM;
		break;
	case 0x05:
	case 0x06: this->type = MBC2;
		break;
	case 0x08:
	case 0x09: this->type = ROM_RAM;
		break;
	case 0x0B: this->type = MMM1;
		break;
	case 0x0C: 
	case 0x0D: this->type = MMM1_RAM;
		break;
	case 0x11: this->type = MBC3;
		break;
	case 0x12:
	case 0x13: this->type = MBC3_RAM;
		break;
	case 0x19: this->type = MBC5;
		break;
	case 0x1A:
	case 0x1B: this->type = MBC5_RAM;
		break;
	case 0x1C: this->type = MBC5_RUMBLE;
		break;
	case 0x1D: 
	case 0x1E: this->type = MBC5_RUMBLE_RAM;
		break;
	case 0x20: this->type = MBC6;
		break;
	case 0x22: this->type = MBC7;
		break;
	case 0xFC: this->type = CAMERA;
		break;
	case 0xFD: this->type = TAMA5;
		break;
	}
	return this->type;
}

char Cartridge::romSize() {
	return this->getAddress(0x148);
}

char Cartridge::ramSize() {
	return this->getAddress(0x149);
}

char Cartridge::regionCode() {
	return this->getAddress(0x147);
}

bool Cartridge::checkHeaderChecksum() {
	short x = 0;
	for (int i = 0x134; i <= 0x14C; i++) {
		x = x - this->getAddress(i) - 1;
	}
	return (x & 0xFF) == this->getAddress(0x14D);
}

bool Cartridge::checkGlobalChecksum() {
	short x = 0, y = 0;
	for (int i = 0; i < this->bytes.size(); i++) {
		if (i == 0x14E || i==0x14F) continue;
		x += this->getAddress(i);
	}
	y = this->getAddress(0x14E) << 8 | this->getAddress(0x14F);
	return x==y;
}

uint8_t Cartridge::getRAMAddress(int dir) {
	return 0;
}