#include "OPCodes.h"

// ADD HL, BC
OPCode op0x09(Boy* gb) {

	return OPCode(0x09, "ADD HL, BC", 8);
}

// ADD HL, DE
OPCode op0x19(Boy* gb) {

	return OPCode(0x19, "ADD HL, DE", 8);
}

// ADD HL, HL
OPCode op0x29(Boy* gb) {

	return OPCode(0x29, "ADD HL, HL", 8);
}

// ADD HL, SP
OPCode op0x39(Boy* gb) {

	return OPCode(0x39, "ADD HL, SP", 8);
}



// ADD SP, #
OPCode op0xE8(Boy* gb) {

	return OPCode(0xE8, "ADD HL, #", 16);
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