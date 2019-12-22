#include "OPCodes.h"

// ADD A, A
OPCode op0x87(Boy* gb) {

	return OPCode(0x87, "ADD A, A", 4);
}

// ADD A, B
OPCode op0x80(Boy* gb) {

	return OPCode(0x80, "ADD A, B", 4);
}

// ADD A, C
OPCode op0x81(Boy* gb) {

	return OPCode(0x81, "ADD A, C", 4);
}

// ADD A, D
OPCode op0x82(Boy* gb) {

	return OPCode(0x82, "ADD A, D", 4);
}

// ADD A, E
OPCode op0x83(Boy* gb) {

	return OPCode(0x83, "ADD A, E", 4);
}

// ADD A, H
OPCode op0x84(Boy* gb) {

	return OPCode(0x84, "ADD A, H", 4);
}

// ADD A, L
OPCode op0x85(Boy* gb) {

	return OPCode(0x85, "ADD A, L", 4);
}

// ADD A, (HL)
OPCode op0x86(Boy* gb) {

	return OPCode(0x86, "ADD A, (HL)", 8);
}

// ADD A, #
OPCode op0xC6(Boy* gb) {

	return OPCode(0xC6, "ADD A, #", 8);
}



// ADC A, A
OPCode op0x8F(Boy* gb) {
	return OPCode(0x8F, "ADC A, A", 4);
}

// ADC A, B
OPCode op0x88(Boy* gb) {
	return OPCode(0x88, "ADC A, B", 4);
}

// ADC A, C
OPCode op0x89(Boy* gb) {
	return OPCode(0x89, "ADC A, C", 4);
}

// ADC A, D
OPCode op0x8A(Boy* gb) {
	return OPCode(0x8A, "ADC A, D", 4);
}

// ADC A, E
OPCode op0x8B(Boy* gb) {
	return OPCode(0x8B, "ADC A, E", 4);
}

// ADC A, H
OPCode op0x8C(Boy* gb) {
	return OPCode(0x8C, "ADC A, H", 4);
}

// ADC A, L
OPCode op0x8D(Boy* gb) {

	return OPCode(0x8D, "ADC A, L", 4);
}

// ADC A, (HL)
OPCode op0x8E(Boy* gb) {

	return OPCode(0x8E, "ADC A, (HL)", 8);
}

// ADC A, #
OPCode op0xCE(Boy* gb) {

	return OPCode(0xCE, "ADC A, #", 8);
}





// SUB A (from A)
OPCode op0x97(Boy* gb) {

	return OPCode(0x97, "SUB A, A", 4);
}

// SUB B (from A)
OPCode op0x90(Boy* gb) {

	return OPCode(0x90, "SUB B, A", 4);
}

// SUB C (from A)
OPCode op0x91(Boy* gb) {

	return OPCode(0x91, "SUB C, A", 4);
}

// SUB D (from A)
OPCode op0x92(Boy* gb) {

	return OPCode(0x92, "SUB D, A", 4);
}

// SUB E (from A)
OPCode op0x93(Boy* gb) {

	return OPCode(0x93, "SUB E, A", 4);
}

// SUB H (from A)
OPCode op0x94(Boy* gb) {

	return OPCode(0x94, "SUB H, A", 4);
}

// SUB L (from A)
OPCode op0x95(Boy* gb) {

	return OPCode(0x95, "SUB L, A", 8);
}

// SUB (HL) (from A)
OPCode op0x96(Boy* gb) {

	return OPCode(0x96, "SUB (HL), A", 8);
}

// SUB # (from A)
OPCode op0xD6(Boy* gb) {

	return OPCode(0xD6, "SUB #, A", 8);
}




// SBC A, A
OPCode op0x9F(Boy* gb) {

	return OPCode(0x9F, "SBC A, A", 4);
}

// SBC A, B
OPCode op0x98(Boy* gb) {

	return OPCode(0x98, "SBC A, B", 4);
}

// SBC A, C
OPCode op0x99(Boy* gb) {

	return OPCode(0x99, "SBC A, C", 4);
}

// SBC A, D
OPCode op0x9A(Boy* gb) {

	return OPCode(0x9A, "SBC A, D", 4);
}

// SBC A, E
OPCode op0x9B(Boy* gb) {

	return OPCode(0x9B, "SBC A, E", 4);
}

// SBC A, H
OPCode op0x9C(Boy* gb) {

	return OPCode(0x9C, "SBC A, H", 4);
}

// SBC A, L
OPCode op0x9D(Boy* gb) {

	return OPCode(0x9D, "SBC A, L", 4);
}

// SBC A, (HL)
OPCode op0x9E(Boy* gb) {

	return OPCode(0x9E, "SBC A, (HL)", 8);
}

// SBC A, #
OPCode op0xDE(Boy* gb) {

	return OPCode(0x9E, "SBC A, #", 8);
}




// AND A (with A)
OPCode op0xA7(Boy* gb) {

	return OPCode(0xA7, "AND A, A", 4);
}

// AND B (with A)
OPCode op0xA0(Boy* gb) {

	return OPCode(0xA0, "AND B, A", 4);
}

// AND C (with A)
OPCode op0xA1(Boy* gb) {

	return OPCode(0xA1, "AND C, A", 4);
}

// AND D (with A)
OPCode op0xA2(Boy* gb) {

	return OPCode(0xA2, "AND D, A", 4);
}

// AND E (with A)
OPCode op0xA3(Boy* gb) {

	return OPCode(0xA3, "AND E, A", 4);
}

// AND H (with A)
OPCode op0xA4(Boy* gb) {

	return OPCode(0xA4, "AND H, A", 4);
}

// AND L (with A)
OPCode op0xA5(Boy* gb) {

	return OPCode(0xA5, "AND L, A", 4);
}

// AND (HL) (with A)
OPCode op0xA6(Boy* gb) {

	return OPCode(0xA6, "AND (HL), A", 8);
}

// AND # (with A)
OPCode op0xE6(Boy* gb) {

	return OPCode(0xE6, "AND #, A", 8);
}




// OR A (with A)
OPCode op0xB7(Boy* gb) {

	return OPCode(0xB7, "OR A, A", 4);
}

// OR B (with A)
OPCode op0xB0(Boy* gb) {

	return OPCode(0xB0, "OR B, A", 4);
}

// OR C (with A)
OPCode op0xB1(Boy* gb) {

	return OPCode(0xB1, "OR C, A", 4);
}

// OR D (with A)
OPCode op0xB2(Boy* gb) {

	return OPCode(0xB2, "OR D, A", 4);
}

// OR E (with A)
OPCode op0xB3(Boy* gb) {

	return OPCode(0xB3, "OR E, A", 4);
}

// OR H (with A)
OPCode op0xB4(Boy* gb) {

	return OPCode(0xB4, "OR H, A", 4);
}

// OR L (with A)
OPCode op0xB5(Boy* gb) {

	return OPCode(0xB5, "OR L, A", 4);
}

// OR (HL) (with A)
OPCode op0xB6(Boy* gb) {

	return OPCode(0xB6, "OR (HL), A", 8);
}

// OR # (with A)
OPCode op0xF6(Boy* gb) {

	return OPCode(0xF6, "OR #, A", 8);
}





// XOR A (with A)
OPCode op0xAF(Boy* gb) {

	return OPCode(0xAF, "XOR A, A", 4);
}

// XOR B (with A)
OPCode op0xA8(Boy* gb) {

	return OPCode(0xA8, "XOR B, A", 4);
}

// XOR C (with A)
OPCode op0xA9(Boy* gb) {

	return OPCode(0xA9, "XOR C, A", 4);
}

// XOR D (with A)
OPCode op0xAA(Boy* gb) {

	return OPCode(0xAA, "XOR D, A", 4);
}

// XOR E (with A)
OPCode op0xAB(Boy* gb) {

	return OPCode(0xAB, "XOR E, A", 4);
}

// XOR H (with A)
OPCode op0xAC(Boy* gb) {

	return OPCode(0xAC, "XOR H, A", 4);
}

// XOR L (with A)
OPCode op0xAD(Boy* gb) {

	return OPCode(0xAD, "XOR L, A", 4);
}

// XOR (HL) (with A)
OPCode op0xAE(Boy* gb) {

	return OPCode(0xAE, "XOR (HL), A", 8);
}

// XOR # (with A)
OPCode op0xEE(Boy* gb) {

	return OPCode(0xEE, "XOR #, A", 8);
}




// CP A (with A)
OPCode op0xBF(Boy* gb) {

	return OPCode(0xBF, "CP A, A", 4);
}

// CP B (with A)
OPCode op0xB8(Boy* gb) {

	return OPCode(0xB8, "CP B, A", 4);
}

// CP C (with A)
OPCode op0xB9(Boy* gb) {

	return OPCode(0xB9, "CP C, A", 4);
}

// CP D (with A)
OPCode op0xBA(Boy* gb) {

	return OPCode(0xBA, "CP D, A", 4);
}

// CP E (with A)
OPCode op0xBB(Boy* gb) {

	return OPCode(0xBB, "CP E, A", 4);
}

// CP H (with A)
OPCode op0xBC(Boy* gb) {

	return OPCode(0xBC, "CP H, A", 4);
}

// CP L (with A)
OPCode op0xBD(Boy* gb) {

	return OPCode(0xBD, "CP L, A", 4);
}

// CP (HL) (with A)
OPCode op0xBE(Boy* gb) {

	return OPCode(0xBE, "CP (HL), A", 8);
}

// CP # (with A)
OPCode op0xFE(Boy* gb) {

	return OPCode(0xFE, "CP #, A", 8);
}






// INC A
OPCode op0x3C(Boy* gb) {

	return OPCode(0x3C, "INC A", 4);
}

// INC B
OPCode op0x04(Boy* gb) {

	return OPCode(0x04, "INC B", 4);
}

// INC C
OPCode op0x0C(Boy* gb) {

	return OPCode(0x0C, "INC C", 4);
}

// INC D
OPCode op0x14(Boy* gb) {

	return OPCode(0x14, "INC D", 4);
}

// INC E
OPCode op0x1C(Boy* gb) {

	return OPCode(0x1C, "INC E", 4);
}

// INC H
OPCode op0x24(Boy* gb) {

	return OPCode(0x24, "INC H", 4);
}

// INC L
OPCode op0x2C(Boy* gb) {

	return OPCode(0x2C, "INC L", 4);
}

// INC (HL)
OPCode op0x34(Boy* gb) {

	return OPCode(0x34, "INC (HL)", 12);
}






// DEC A
OPCode op0x3D(Boy* gb) {

	return OPCode(0x3D, "DEC A", 4);
}

// DEC B
OPCode op0x05(Boy* gb) {

	return OPCode(0x05, "DEC B", 4);
}

// DEC C
OPCode op0x0D(Boy* gb) {

	return OPCode(0x0D, "DEC C", 4);
}

// DEC D
OPCode op0x15(Boy* gb) {

	return OPCode(0x15, "DEC D", 4);
}

// DEC E
OPCode op0x1D(Boy* gb) {

	return OPCode(0x1D, "DEC E", 4);
}

// DEC H
OPCode op0x25(Boy* gb) {

	return OPCode(0x25, "DEC H", 4);
}

// DEC L
OPCode op0x2D(Boy* gb) {

	return OPCode(0x2D, "DEC L", 4);
}

// DEC (HL)
OPCode op0x35(Boy* gb) {

	return OPCode(0x35, "DEC (HL)", 12);
}