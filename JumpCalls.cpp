#include "OPCodes.h"

// JP nn
OPCode op0xC3(Boy* gb) {
	uint16_t nn = gb->getNextInstructionPair();
	gb->jumpPC(nn-1);
	return OPCode(0xC3, "JP nn", 12);
}





// JP NZ, nn
OPCode op0xC2(Boy* gb) {
	return OPCode(0xC2, "JP NZ, nn", 12);
}

// JP Z, nn
OPCode op0xCA(Boy* gb) {
	return OPCode(0xCA, "JP Z, nn", 12);
}

// JP NC, nn
OPCode op0xD2(Boy* gb) {
	return OPCode(0xD2, "JP NC, nn", 12);
}

// JP C, nn
OPCode op0xDA(Boy* gb) {
	return OPCode(0xDA, "JP C, nn", 12);
}



// JP (HL)
OPCode op0xE9(Boy* gb) {
	return OPCode(0xE9, "JP (HL)", 4);
}

// JR n
OPCode op0x18(Boy* gb) {
	return OPCode(0x18, "JR n", 8);
}





// JR NZ, *
OPCode op0x20(Boy* gb) {
	return OPCode(0x20, "JR NZ, *", 8);
}

// JR Z, *
OPCode op0x28(Boy* gb) {
	return OPCode(0x28, "JR Z, *", 8);
}

// JR NC, *
OPCode op0x30(Boy* gb) {
	return OPCode(0x30, "JR NC, *", 8);
}

// JR C, *
OPCode op0x38(Boy* gb) {
	return OPCode(0x38, "JR C, *", 8);
}





// CALL nn
OPCode op0xCD(Boy* gb) {
	return OPCode(0xCD, "CALL nn", 12);
}

// CALL NZ, nn
OPCode op0xC4(Boy* gb) {
	return OPCode(0xC4, "CALL NZ, nn", 12);
}

// CALL Z, nn
OPCode op0xCC(Boy* gb) {
	return OPCode(0xCC, "CALL Z, nn", 12);
}

// CALL NC, nn
OPCode op0xD4(Boy* gb) {
	return OPCode(0xD4, "CALL NC, nn", 12);
}

// CALL C, nn
OPCode op0xDC(Boy* gb) {
	return OPCode(0xDC, "CALL C, nn", 12);
}