#include "Boy.h"
#include "OPCodes.h"

void Boy::init(int w, int h){
	this->title = "TheGB";
	this->w = w;
	this->h = h;
	populateCodes();
}

void Boy::powerUp() {
	SDL_Init(SDL_INIT_EVERYTHING);
	this->window = SDL_CreateWindow(this->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->w, this->h, SDL_WINDOW_SHOWN);
	this->renderer = SDL_CreateRenderer(this->window, -1, 0);

	SDL_RenderPresent(this->renderer);

	this->pc = 0x100;
	this->sp = 0xFFFE;

	this->loop();
}

void Boy::loop() {
	//while (this->running) {
	//	//double startFrame = getCurrentTime();
	//	this->tick();
	//	
	//}
	for (int i = 0; i < 10; i++) {
		this->tick();
	}
}

void Boy::tick() {
	unsigned char instruction = this->getNextInstruction();
	executeCode(this, instruction);
}

void Boy::handleKey(SDL_KeyboardEvent e) {
	
}

void Boy::printCartridgeInfo(){
	if (this->cartridge == nullptr) {
		printf("No cartridge initialized.\n");
		return;
	}
	printf("\nType: %02x\n", this->cartridge->getAddress(0x147));
	printf("ROM: %02x\n", this->cartridge->getAddress(0x148));
	printf("RAM: %02x\n", this->cartridge->getAddress(0x149));
	printf("Region: %02x\n", this->cartridge->getAddress(0x14A));
	printf("HeaderCheck: %i\n", this->cartridge->checkHeaderChecksum());
	printf("GlobalCheck: %i\n", this->cartridge->checkGlobalChecksum());
}

void Boy::loadCartridge(Cartridge *cart) {
	this->cartridge = cart;
	this->startCartridge();
}

void Boy::loadCartridge(const char* cartPath) {
	Cartridge *c;
	c = new Cartridge(cartPath);
	this->cartridge = c;
	this->startCartridge();
}

bool Boy::startCartridge() {
	if (this->cartridge == nullptr) return false;
	this->cartridge->read();

	bool headerCheck = this->cartridge->checkHeaderChecksum();
	if (!headerCheck) return false;

	bool globalCheck = this->cartridge->checkGlobalChecksum();
	if (!globalCheck) return false;

	printf("Showing window...\n");
	this->running = true;
	this->powerUp();

	return true;
}

unsigned char Boy::getNextInstruction(bool increment) {
	int dir = this->pc + 1;
	if (increment) this->pc = dir;
	return this->cartridge->getAddress(dir);
}

unsigned char Boy::getNextInstruction() {
	return this->getNextInstruction(true);
}

unsigned char Boy::getAddress(int dir) {

	if (0x0000 < dir && dir < 0x3FFF) { // 16KB ROM BANK 0 (CARTRIDGE)
		return cartridge->getAddress(dir);
	} else if (0x4000 < dir && dir < 0x7FFF) { // 16KB ROM BANK N (CARTRIDGE)
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0x8000 < dir && dir < 0x9FFF) { // 8KB VRAM
		printf("Address 0x%04x not mapped\n", dir);
	} else if(0xA000 < dir && dir < 0xBFFF){ // 8KB EXTERNAL RAM (CARTRIDGE)
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0xC000 < dir && dir < 0xCFFF) { // 4KB INTERNAL RAM BANK 0
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0xD000 < dir && dir < 0xDFFF) { // 4KB INTERNAL RAM BANK 1
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0xE000 < dir && dir < 0xFDFF) { // ECHO WRAM
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0xFE00 < dir && dir < 0xFE9F) { // SPRITE ATTRIBUTE TABLE OAM
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0xFEA0 < dir && dir < 0xFE9F) { // NOT USED
		return 0x00;
	} else if (0xFF00 < dir && dir < 0xFEFF) { // IO PORTS
		printf("Address 0x%04x not mapped\n", dir);
	} else if (0xFF80 < dir && dir < 0xFFFE) { // HIGH RAM
		printf("Address 0x%04x not mapped\n", dir);
	} else if (dir == 0xFFFF) { // INTERRUPT ENABLE REGISTER
		printf("Address 0x%04x not mapped\n", dir);
	}
	return 0;
}

unsigned short Boy::getAddress2Bytes(int dir) {
	unsigned char lbyte = this->getAddress(dir);
	unsigned char hbyte = this->getAddress(dir + 1);
	return lbyte << 8 | hbyte;
}

bool Boy::getFlag(FLAG f) {
	switch (f) {
	case FLAG_Z: return (this->status) >> 7 & 1;
	case FLAG_N: return (this->status) >> 6 & 1;
	case FLAG_H: return (this->status) >> 5 & 1;
	case FLAG_C: return (this->status) >> 4 & 1;
	default: return 0;
	}
}

void Boy::setFlag(FLAG f, bool set) {
	unsigned short mask;
	switch (f) {
	case FLAG_Z:
		mask = (1 << 7);
		break;
	case FLAG_N:
		mask = (1 << 6);
		break;
	case FLAG_H:
		mask = (1 << 5);
		break;
	case FLAG_C:
		mask = (1 << 4);
		break;
	}
	if (set) {
		this->status = this->status | mask;
	} else {
		this->status = ~mask & this->status;
	}
}

unsigned short Boy::getStatus() {
	return this->status;
}

unsigned short Boy::incrementPC(int count) {
	this->pc += count;
	return this->pc;
}

unsigned short Boy::incrementPC() {
	this->pc++;
	return this->pc;
}

unsigned short Boy::jumpPC(unsigned short pc) {
	this->pc = pc;
	return this->pc;
}

unsigned char* Boy::getRegisterDir(REGISTER r) {
	switch (r) {
	case REG_A: return &this->A;
	case REG_B: return &this->B;
	case REG_C: return &this->C;
	case REG_D: return &this->D;
	case REG_E: return &this->E;
	case REG_F: return &this->F;
	case REG_H: return &this->H;
	case REG_L: return &this->L;
	}
}

unsigned char Boy::getRegister(REGISTER r) {
	return *(this->getRegisterDir(r));
}

void Boy::setRegister(REGISTER r, unsigned char val) {
	*(this->getRegisterDir(r)) = val;
}

void Boy::setRegisterPair(REGISTER r, unsigned short val) {
	unsigned char *hdir, *ldir;
	switch (r) {
	case REG_AF:
		hdir = this->getRegisterDir(REG_A);
		ldir = this->getRegisterDir(REG_F);
		break;
	case REG_BC:
		hdir = this->getRegisterDir(REG_B);
		ldir = this->getRegisterDir(REG_C);
		break;
	case REG_DE:
		hdir = this->getRegisterDir(REG_D);
		ldir = this->getRegisterDir(REG_E);
		break;
	case REG_HL:
		hdir = this->getRegisterDir(REG_H);
		ldir = this->getRegisterDir(REG_L);
		break;
	default:
		return;
	}

	//char buffer[32];
	//_itoa_s(val, buffer, 2);
	//printf("binary: %s\n", buffer);

	//_itoa_s((val >> 8), buffer, 2);
	//printf("binary: %s\n", buffer);

	//_itoa_s((val & 0xFF), buffer, 2);
	//printf("binary: %s\n", buffer);
	
	(*hdir) = (val >> 8);
	(*ldir) = (val & 0xFF);
}

unsigned short Boy::getRegisterPair(REGISTER r) {
	unsigned char hbyte = 0x0, lbyte = 0x0;
	switch (r) {
	case REG_AF:
		hbyte = this->A;
		lbyte = this->F;
		break;
	case REG_BC:
		hbyte = this->B;
		lbyte = this->C;
		break;
	case REG_DE:
		hbyte = this->D;
		lbyte = this->E;
		break;
	case REG_HL:
		hbyte = this->H;
		lbyte = this->L;
		break;
	}
	return hbyte << 8 | lbyte;
}
