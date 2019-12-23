#include "OPCodes.h"

void addHL(Boy* gb, uint16_t n) {
	
}

// ADD HL, BC
OPCode op0x09(Boy* gb) {
	addHL(gb, gb->getRegisterPair(REG_BC));
	return OPCode(0x09, "ADD HL, BC", 8);
}

// ADD HL, DE
OPCode op0x19(Boy* gb) {
	addHL(gb, gb->getRegisterPair(REG_DE));
	return OPCode(0x19, "ADD HL, DE", 8);
}

// ADD HL, HL
OPCode op0x29(Boy* gb) {
	addHL(gb, gb->getRegisterPair(REG_HL));
	return OPCode(0x29, "ADD HL, HL", 8);
}

// ADD HL, SP
OPCode op0x39(Boy* gb) {
	addHL(gb, gb->getSP());
	return OPCode(0x39, "ADD HL, SP", 8);
}



// ADD SP, #
OPCode op0xE8(Boy* gb) {
	uint16_t sp = gb->getSP();
	uint8_t n = gb->getNextInstruction();
	gb->clearFlags();
	gb->setFlag(FLAG_H, ((sp & 0xf) + (n & 0xf) & 0x10) == 0x10);
	gb->setFlag(FLAG_C, ((sp & 0xff) + (n & 0xff) & 0x100) == 0x100);
	gb->setSP(sp + n);
	return OPCode(0xE8, "ADD SP, #", 16);
}




// INC BC
OPCode op0x03(Boy* gb) {

	return OPCode(0x03, "INC BC", 8);
}

// INC DE
OPCode op0x13(Boy* gb) {

	return OPCode(0x13, "INC DE", 8);
}


// INC HL
OPCode op0x23(Boy* gb) {

	return OPCode(0x23, "INC HL", 8);
}


// INC SP
OPCode op0x33(Boy* gb) {

	return OPCode(0x33, "INC SP", 8);
}




// DEC BC
OPCode op0x0B(Boy* gb) {

	return OPCode(0x0B, "DEC BC", 8);
}

// DEC DE
OPCode op0x1B(Boy* gb) {

	return OPCode(0x03, "DEC BC", 8);
}


// DEC HL
OPCode op0x2B(Boy* gb) {

	return OPCode(0x2B, "DEC HL", 8);
}


// DEC SP
OPCode op0x3B(Boy* gb) {

	return OPCode(0x3B, "DEC SP", 8);
}