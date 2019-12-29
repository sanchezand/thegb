#include "OPCodes.h"

// LD BC, nn
OPCode op0x01(Boy* gb) {
	//gb->setRegisterPair(REG_BC, gb->getNextInstructionPair());
	gb->loadNextPairToRegister(REG_BC);
	return OPCode(0x01, "LD BC, nn", 12);
}

// LD DE, nn
OPCode op0x11(Boy* gb) {
	//gb->setRegisterPair(REG_DE, gb->getNextInstructionPair());
	gb->loadNextPairToRegister(REG_DE);
	return OPCode(0x11, "LD DE, nn", 12);
}

// LD HL, nn
OPCode op0x21(Boy* gb) {
	//gb->setRegisterPair(REG_HL, gb->getNextInstructionPair());
	gb->loadNextPairToRegister(REG_HL);
	return OPCode(0x21, "LD HL, nn", 12);
}

// LD SP, nn
OPCode op0x31(Boy* gb) {
	gb->setSP(gb->getNextInstructionPair());
	return OPCode(0x31, "LD SP, nn", 12);
}



// LD SP, HL
OPCode op0xF9(Boy* gb) {
	gb->setSP(gb->getRegisterPair(REG_HL));
	return OPCode(0xF9, "LD SP, HL", 8);
}


// LD HL, SP+n
// LDHL SP, n
OPCode op0xF8(Boy* gb) {
	uint8_t n = gb->getNextInstruction();
	uint16_t sp = gb->getSP() + n;

	gb->setFlag(FLAG_Z, false);
	gb->setFlag(FLAG_N, false);
	gb->setFlag(FLAG_H, ((gb->getSP() ^ n ^ sp) & 0x10) == 0x10);
	gb->setFlag(FLAG_C, ((gb->getSP() ^ n ^ sp) & 0x100) == 0x100);

	gb->setRegisterPair(REG_HL, sp);

	return OPCode(0xF8, "LD HL, SP+1", 12);
}

// LD (nn), SP
OPCode op0x08(Boy* gb) {
	uint16_t nn = gb->getNextInstructionPair();
	gb->setAddressPair(nn, gb->getSP());
	return OPCode(0x08, "LD (nn), SP", 20);
}


// PUSH AF
OPCode op0xF5(Boy* gb) {
	gb->pushStack(gb->getRegisterPair(REG_AF));
	return OPCode(0xF5, "PUSH AF", 16);
}

// PUSH BC
OPCode op0xC5(Boy* gb) {
	gb->pushStack(gb->getRegisterPair(REG_BC));
	return OPCode(0xC5, "PUSH BC", 16);
}

// PUSH DE
OPCode op0xD5(Boy* gb) {
	gb->pushStack(gb->getRegisterPair(REG_DE));
	return OPCode(0xD5, "PUSH DE", 16);
}

// PUSH HL
OPCode op0xE5(Boy* gb) {
	gb->pushStack(gb->getRegisterPair(REG_HL));
	return OPCode(0xE5, "PUSH HL", 16);
}



// POP AF
OPCode op0xF1(Boy* gb) {
	gb->setRegisterPair(REG_AF, gb->popStack16());
	return OPCode(0xF1, "POP AF", 12);
}

// POP BC
OPCode op0xC1(Boy* gb) {
	gb->setRegisterPair(REG_BC, gb->popStack16());
	return OPCode(0xC1, "POP BC", 12);
}

// POP DE
OPCode op0xD1(Boy* gb) {
	gb->setRegisterPair(REG_DE, gb->popStack16());
	return OPCode(0xD1, "POP DE", 12);
}

// POP HL
OPCode op0xE1(Boy* gb) {
	gb->setRegisterPair(REG_HL, gb->popStack16());
	return OPCode(0xE1, "POP HL", 12);
}