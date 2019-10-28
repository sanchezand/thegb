#include "Boy.h"
#include "Util.h"
#include "OPCodes.h"

void Boy::init(int w, int h){
	this->title = "TheGB";
	this->w = w;
	this->h = h;
}

void Boy::powerUp() {
	//SDL_Init(SDL_INIT_EVERYTHING);
	//this->window = SDL_CreateWindow(this->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->w, this->h, SDL_WINDOW_SHOWN);
	//this->renderer = SDL_CreateRenderer(this->window, -1, 0);

	//SDL_RenderPresent(this->renderer);

	memset(this->RAM_BANK1, 0, sizeof(this->RAM_BANK1));
	memset(this->RAM_BANK2, 0, sizeof(this->RAM_BANK2));
	memset(this->VRAM, 0, sizeof(this->VRAM));

	this->pc = 0x0FF;
	this->sp = 0xFFFE;

	this->loop();
}

void Boy::loop() {
	//while (this->running) {
	//	//double startFrame = getCurrentTime();
	//	this->tick();
	//	
	//}
	for (int i = 0; i < 20; i++) {
		unsigned char instruction = this->getNextInstruction(false);
		this->tick();
	}
}

void Boy::tick() {
	unsigned char instruction = this->getNextInstruction(false);
	//printf("Exec: 0x%02x\n", instruction);
	executeCode(this, instruction);
	this->incrementPC();
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

unsigned short Boy::getNextInstructionPair(bool increment) {
	int dir = this->pc + 1;
	unsigned char hbyte = this->cartridge->getAddress(dir);
	dir += 1;
	unsigned char lbyte = this->cartridge->getAddress(dir);
	if (increment) this->pc = dir;

	return joinBytes(hbyte, lbyte);
}

unsigned short Boy::getNextInstructionPair() {
	return this->getNextInstructionPair(true);
}

unsigned char Boy::getCurrentInstruction() {
	return this->getAddress(this->pc);
}

unsigned char Boy::getAddress(unsigned short dir) {
	if (0x0000 <= dir && dir <= 0x3FFF) { // 16KB ROM BANK 0 (CARTRIDGE)
		return cartridge->getAddress(dir);
	} 
	else if (0x4000 <= dir && dir <= 0x7FFF) { // 16KB ROM BANK N (CARTRIDGE)
		printf("Address 0x%04x not mapped\n", dir);
	} 
	else if (0x8000 <= dir && dir <= 0x9FFF) { // 8KB VRAM
		printf("Address 0x%04x not mapped\n", dir);
	} 
	else if(0xA000 <= dir && dir <= 0xBFFF){ // 8KB EXTERNAL RAM (CARTRIDGE)
		printf("Address 0x%04x not mapped\n", dir);
	} 
	else if (0xC000 <= dir && dir <= 0xCFFF) { // 4KB INTERNAL RAM BANK 0
		return this->getAddressRam(dir, true);
	} 
	else if (0xD000 <= dir && dir <= 0xDFFF) { // 4KB INTERNAL RAM BANK 1
		return this->getAddressRam(dir, true);
	} 
	else if (0xE000 <= dir && dir <= 0xFDFF) { // ECHO WRAM
		return this->getAddress(dir - 0x2000);
	} 
	else if (0xFE00 <= dir && dir <= 0xFE9F) { // SPRITE ATTRIBUTE TABLE OAM
		printf("Address 0x%04x not mapped\n", dir);
	} 
	else if (0xFEA0 <= dir && dir <= 0xFE9F) { // NOT USED
		return 0x00;
	} 
	else if (0xFF00 <= dir && dir <= 0xFEFF) { // IO PORTS
		printf("Address 0x%04x not mapped\n", dir);
	} 
	else if (0xFF80 <= dir && dir <= 0xFFFE) { // HIGH RAM
		printf("Address 0x%04x not mapped\n", dir);
	} 
	else if (dir == 0xFFFF) { // INTERRUPT ENABLE REGISTER
		printf("Address 0x%04x not mapped\n", dir);
	}

	printf("IVNALID ADDRESS - 0x%04x\n", dir);
	return 0;
}

void Boy::setAddress(int dir, unsigned char val) {
	if (0x8000 <= dir && dir <= 0x9FFF) { // 8KB VRAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xA000 <= dir && dir <= 0xBFFF) { // 8KB EXTERNAL RAM (CARTRIDGE)
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xC000 <= dir && dir <= 0xDFFF) { // 8KB INTERNAL RAM BANKS
		this->setAddressRam(dir - 0xC000, val);
	}
	else if (0xE000 <= dir && dir <= 0xFDFF) { // ECHO WRAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xFE00 <= dir && dir <= 0xFE9F) { // SPRITE ATTRIBUTE TABLE OAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xFF00 <= dir && dir <= 0xFEFF) { // IO PORTS
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xFF80 <= dir && dir <= 0xFFFE) { // HIGH RAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (dir == 0xFFFF) { // INTERRUPT ENABLE REGISTER
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	// ADD SPECIAL REGISTERS
}

void Boy::setAddressPair(unsigned short dir, unsigned short val) {
	unsigned char* bytes = separateBytes(val);

	if (0x8000 <= dir && dir <= 0x9FFF) { // 8KB VRAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xA000 <= dir && dir <= 0xBFFF) { // 8KB EXTERNAL RAM (CARTRIDGE)
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xC000 <= dir && dir <= 0xDFFF) { // 8KB INTERNAL RAM BANKS
		this->setAddressRam(dir - 0xC000, bytes[0]);
		this->setAddressRam(dir - (0xC000) + 0x1, bytes[1]);
	}
	else if (0xE000 <= dir && dir <= 0xFDFF) { // ECHO WRAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xFE00 <= dir && dir <= 0xFE9F) { // SPRITE ATTRIBUTE TABLE OAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xFF00 <= dir && dir <= 0xFEFF) { // IO PORTS
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (0xFF80 <= dir && dir <= 0xFFFE) { // HIGH RAM
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}
	else if (dir == 0xFFFF) { // INTERRUPT ENABLE REGISTER
		printf("WRITE: Address 0x%04x not mapped\n", dir);
	}


	// ADD SPECIAL REGISTERS
}

unsigned short Boy::getAddress2Bytes(int dir) {
	unsigned char lbyte = this->getAddress(dir);
	unsigned char hbyte = this->getAddress(dir + 1);
	return lbyte << 8 | hbyte;
}

bool Boy::getFlag(Flag f) {
	switch (f) {
	case FLAG_Z: return (this->status) >> 7 & 1;
	case FLAG_N: return (this->status) >> 6 & 1;
	case FLAG_H: return (this->status) >> 5 & 1;
	case FLAG_C: return (this->status) >> 4 & 1;
	default: return 0;
	}
}

void Boy::setFlag(Flag f, bool set) {
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

unsigned short Boy::getPC() {
	return this->pc;
}

void Boy::setSP(unsigned short sp){
	this->sp = sp;
}

unsigned short Boy::getSP() {
	return this->sp;
}

unsigned short Boy::jumpPC(unsigned short pc) {
	this->pc = pc;
	return this->pc;
}

unsigned char* Boy::getRegisterDir(Register r) {
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

unsigned char Boy::getRegister(Register r) {
	return *(this->getRegisterDir(r));
}

void Boy::setRegister(Register r, unsigned char val) {
	*(this->getRegisterDir(r)) = val;
}

void Boy::setRegisterPair(Register r, unsigned short val) {
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
	
	(*hdir) = (val >> 8);
	(*ldir) = (val & 0xFF);
}

unsigned short Boy::getRegisterPair(Register r) {
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

unsigned char Boy::getAddressRam(unsigned short dir, bool bus) {
	if (bus) {
		dir = dir - 0xC000;
	}
	if (dir > 0x1000) return this->RAM_BANK1[dir];
	else return this->RAM_BANK2[dir - 0x1000];
}

void Boy::setAddressRam(int dir, unsigned char val) {
	if (dir > 0x1000) {
		this->RAM_BANK1[dir - 0x1000] = val;
	}
	else {
		this->RAM_BANK2[dir - 0x1000] = val;
	}
}

void Boy::incrementRegister(Register r, int count) {
	switch (r) {
	case REG_AF:
	case REG_BC:
	case REG_DE:
	case REG_HL:
		this->setRegisterPair(r, this->getRegisterPair(r) + count);
		break;
	default:
		unsigned char newReg = this->getRegister(r) + count;

		this->setFlag(FLAG_N, false);
		this->setFlag(FLAG_Z, newReg == 0);
		this->setFlag(FLAG_H, newReg & 0x0F);

		this->setRegister(r, newReg);
	}
}

void Boy::decrementRegister(Register r, int count) {
	switch (r) {
	case REG_AF:
	case REG_BC:
	case REG_DE:
	case REG_HL:
		this->setRegisterPair(r, this->getRegisterPair(r) - count);
		break;
	default:
		unsigned char newReg = this->getRegister(r) - count;

		this->setFlag(FLAG_N, true);
		this->setFlag(FLAG_Z, newReg == 0);
		this->setFlag(FLAG_H, (newReg & 0x0F) == 0x0F);

		this->setRegister(r, newReg);
	}
}

void Boy::incrementRegister(Register r) {
	return this->incrementRegister(r, 1);
}

void Boy::decrementRegister(Register r) {
	this->decrementRegister(r, 1);
}

void Boy::addRegisters(Register dest, Register adding) {
	switch (dest) {
		case REG_AF:
		case REG_BC:
		case REG_DE:
		case REG_HL: {
			unsigned short d = this->getRegisterPair(dest);
			unsigned short a = this->getRegisterPair(adding);

			this->setRegisterPair(dest, d + a);
			this->setFlag(FLAG_N, false);
			this->setFlag(FLAG_C, d + a > 0xFFFF);
			this->setFlag(FLAG_H, ((d & 0x0FFF) + (a & 0x0FFF)) > 0x0FFF);
			break;
		}
		default: {
			unsigned char dc;
			unsigned char ac = this->getRegister(dest);
			if (adding == REG_HL) {
				dc = this->getAddress(this->getRegister(adding));
			}
			else {
				dc = this->getRegister(adding);
			}
			this->setRegister(dest, dc + ac);
			this->setFlag(FLAG_Z, (dc + ac) == 0x00);
			this->setFlag(FLAG_N, false);
			this->setFlag(FLAG_H, ((dc & 0x0FFF) + (ac & 0x0FFF)) > 0x0FFF);
			this->setFlag(FLAG_C, (dc + ac) > 0xFFFF);
			break;
		}
	}
}

void Boy::loadNextToRegister(Register r) {
	unsigned char n = getNextInstruction();
	this->setRegister(r, n);
}

void Boy::loadNextPairToRegister(Register r) {
	unsigned char nn = getNextInstructionPair();
	this->setRegisterPair(r, nn);
}

void Boy::pushStack(Register r) {

}

void Boy::popStack(Register r) {

}