#include "OPCodes.h"

// LD BC, nn
char op0x01(Boy* gb) {
	//gb->setRegisterPair(REG_BC, gb->getNextInstructionPair());
	gb->loadNextPairToRegister(REG_BC);
	return 12;
}

// LD DE, nn
char op0x11(Boy* gb) {
	//gb->setRegisterPair(REG_DE, gb->getNextInstructionPair());
	gb->loadNextPairToRegister(REG_DE);
	return 12;
}

// LD HL, nn
char op0x21(Boy* gb) {
	//gb->setRegisterPair(REG_HL, gb->getNextInstructionPair());
	gb->loadNextPairToRegister(REG_HL);
	return 12;
}

// LD SP, nn
char op0x31(Boy* gb) {
	gb->setSP(gb->getNextInstructionPair());
	return 12;
}



// LD SP, HL
char op0xF9(Boy* gb) {
	gb->setSP(gb->getRegisterPair(REG_HL));
	return 8;
}


// LD HL, SP+n
// LDHL SP, n
char op0xF8(Boy* gb) {
	uint8_t n = gb->getNextInstruction();
	uint16_t sp = gb->getSP() + n;

	gb->setFlag(FLAG_Z, false);
	gb->setFlag(FLAG_N, false);
	gb->setFlag(FLAG_H, ((gb->getSP() ^ n ^ sp) & 0x10) == 0x10);
	gb->setFlag(FLAG_C, ((gb->getSP() ^ n ^ sp) & 0x100) == 0x100);

	gb->setRegisterPair(REG_HL, sp);

	return 12;
}

// LD (nn), SP
char op0x08(Boy* gb) {
	uint16_t nn = gb->getNextInstructionPair();
	gb->setAddressPair(nn, gb->getSP());
	return 20;
}


// PUSH AF
char op0xF5(Boy* gb) {

	return 16;
}

// PUSH BC
char op0xC5(Boy* gb) {

	return 16;
}

// PUSH DE
char op0xD5(Boy* gb) {

	return 16;
}

// PUSH HL
char op0xE5(Boy* gb) {

	return 16;
}



// POP AF
char op0xF1(Boy* gb) {

	return 12;
}

// POP BC
char op0xC1(Boy* gb) {

	return 12;
}

// POP DE
char op0xD1(Boy* gb) {

	return 12;
}

// POP HL
char op0xE1(Boy* gb) {

	return 12;
}