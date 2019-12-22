#include "OPCodes.h"

// SWAP A
OPCode opCB0x37(Boy* gb) {

	return OPCode(0x37, "SWAP A", 8);
}

// SWAP B
OPCode opCB0x30(Boy* gb) {

	return OPCode(0x30, "SWAP B", 8);
}

// SWAP C
OPCode opCB0x31(Boy* gb) {

	return OPCode(0x31, "SWAP C", 8);
}

// SWAP D
OPCode opCB0x32(Boy* gb) {

	return OPCode(0x32, "SWAP D", 8);
}

// SWAP E
OPCode opCB0x33(Boy* gb) {

	return OPCode(0x33, "SWAP E", 8);
}

// SWAP H
OPCode opCB0x34(Boy* gb) {

	return OPCode(0x34, "SWAP H", 8);
}

// SWAP L
OPCode opCB0x35(Boy* gb) {

	return OPCode(0x35, "SWAP L", 8);
}

// SWAP (HL)
OPCode opCB0x36(Boy* gb) {

	return OPCode(0x36, "SWAP (HL)", 16);
}



// DAA
OPCode op0x27(Boy* gb) {

	return OPCode(0x27, "DAA", 4);
}

// CPL A
OPCode op0x2F(Boy* gb) {

	return OPCode(0x2F, "CPL A", 4);
}

// CCF
OPCode op0x3F(Boy* gb) {

	return OPCode(0x3F, "CCF", 4);
}

// SCF
OPCode op0x37(Boy* gb) {

	return OPCode(0x37, "SCF", 4);
}

// NOP
OPCode op0x00(Boy* gb) {
	return OPCode(0x00, "NOP", 4);
}

// HALT
OPCode op0x76(Boy* gb) {
	return OPCode(0x76, "HALT", 4);
}

// STOP
OPCode op0x10(Boy* gb) {
	return OPCode(0x10, "STOP", 4);
}

// DI
OPCode op0xF3(Boy* gb) {
	return OPCode(0xF3, "DI", 4);
}

// EI
OPCode op0xFB(Boy* gb) {
	return OPCode(0xFB, "EI", 4);
}





// RST 00H
OPCode op0xC7(Boy* gb) {
	return OPCode(0xC7, "RST 00H", 32);
}

// RST 08H
OPCode op0xCF(Boy* gb) {
	return OPCode(0xCF, "RST 08H", 32);
}

// RST 10H
OPCode op0xD7(Boy* gb) {
	return OPCode(0xD7, "RST 10H", 32);
}

// RST 18H
OPCode op0xDF(Boy* gb) {
	return OPCode(0xDF, "RST 18H", 32);
}

// RST 20H
OPCode op0xE7(Boy* gb) {
	return OPCode(0xE7, "RST 20H", 32);
}

// RST 28H
OPCode op0xEF(Boy* gb) {
	return OPCode(0xEF, "RST 28H", 32);
}

// RST 30H
OPCode op0xF7(Boy* gb) {
	return OPCode(0xF7, "RST 30H", 32);
}

// RST 38H
OPCode op0xFF(Boy* gb) {
	return OPCode(0xFF, "RST 38H", 32);
}






// RET 
OPCode op0xC9(Boy* gb) {
	return OPCode(0xC9, "RET", 8);
}

// RET NZ
OPCode op0xC0(Boy* gb) {
	return OPCode(0xC0, "RET NZ", 8);
}

// RET Z
OPCode op0xC8(Boy* gb) {
	return OPCode(0xC8, "RET Z", 8);
}

// RET NC
OPCode op0xD0(Boy* gb) {
	return OPCode(0xD0, "RET NC", 8);
}

// RET C
OPCode op0xD8(Boy* gb) {
	return OPCode(0xD8, "RET C", 8);
}






// RETI
OPCode op0xD9(Boy* gb) {
	return OPCode(0xD9, "RETI", 8);
}