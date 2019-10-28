#include "OPCodes.h"

// ADD HL, BC
char op0x09(Boy* gb) {

	return 8;
}

// ADD HL, DE
char op0x19(Boy* gb) {

	return 8;
}

// ADD HL, HL
char op0x29(Boy* gb) {

	return 8;
}

// ADD HL, SP
char op0x39(Boy* gb) {

	return 8;
}



// ADD SP, #
char op0xE8(Boy* gb) {

	return 16;
}




// INC BC
char op0x03(Boy* gb) {

	return 8;
}

// INC DE
char op0x13(Boy* gb) {

	return 8;
}


// INC HL
char op0x23(Boy* gb) {

	return 8;
}


// INC SP
char op0x33(Boy* gb) {

	return 8;
}




// DEC BC
char op0x0B(Boy* gb) {

	return 8;
}

// DEC DE
char op0x1B(Boy* gb) {

	return 8;
}


// DEC HL
char op0x2B(Boy* gb) {

	return 8;
}


// DEC SP
char op0x3B(Boy* gb) {

	return 8;
}