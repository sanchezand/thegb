#include "OPCodes.h"

// SWAP A
char opCB0x37(Boy* gb) {

	return 8;
}

// SWAP B
char opCB0x30(Boy* gb) {

	return 8;
}

// SWAP C
char opCB0x31(Boy* gb) {

	return 8;
}

// SWAP D
char opCB0x32(Boy* gb) {

	return 8;
}

// SWAP E
char opCB0x33(Boy* gb) {

	return 8;
}

// SWAP H
char opCB0x34(Boy* gb) {

	return 8;
}

// SWAP L
char opCB0x35(Boy* gb) {

	return 8;
}

// SWAP (HL)
char opCB0x36(Boy* gb) {

	return 16;
}



// DAA
char op0x27(Boy* gb) {

	return 4;
}

// CPL A
char op0x2F(Boy* gb) {

	return 4;
}

// CCF
char op0x3F(Boy* gb) {

	return 4;
}

// SCF
char op0x37(Boy* gb) {

	return 4;
}

// NOP
char op0x00(Boy* gb) {
	return 4;
}

// HALT
char op0x76(Boy* gb) {
	return 4;
}

// STOP
char op0x10(Boy* gb) {
	return 4;
}

// DI
char op0xF3(Boy* gb) {
	return 4;
}

// EI
char op0xFB(Boy* gb) {
	return 4;
}