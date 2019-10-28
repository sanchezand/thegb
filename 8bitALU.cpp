#include "OPCodes.h"

// ADD A, A
char op0x87(Boy* gb) {

	return 4;
}

// ADD A, B
char op0x80(Boy* gb) {

	return 4;
}

// ADD A, C
char op0x81(Boy* gb) {

	return 4;
}

// ADD A, D
char op0x82(Boy* gb) {

	return 4;
}

// ADD A, E
char op0x83(Boy* gb) {

	return 4;
}

// ADD A, H
char op0x84(Boy* gb) {

	return 4;
}

// ADD A, L
char op0x85(Boy* gb) {

	return 4;
}

// ADD A, (HL)
char op0x86(Boy* gb) {

	return 8;
}

// ADD A, #
char op0xC6(Boy* gb) {

	return 8;
}



// ADC A, A
char op0x8F(Boy* gb) {
	return 4;
}

// ADC A, B
char op0x88(Boy* gb) {

	return 4;
}

// ADC A, C
char op0x89(Boy* gb) {

	return 4;
}

// ADC A, D
char op0x8A(Boy* gb) {

	return 4;
}

// ADC A, E
char op0x8B(Boy* gb) {

	return 4;
}

// ADC A, H
char op0x8C(Boy* gb) {

	return 4;
}

// ADC A, L
char op0x8D(Boy* gb) {

	return 4;
}

// ADC A, (HL)
char op0x8E(Boy* gb) {

	return 8;
}

// ADC A, #
char op0xCE(Boy* gb) {

	return 8;
}





// SUB A (from A)
char op0x97(Boy* gb) {

	return 4;
}

// SUB B (from A)
char op0x90(Boy* gb) {

	return 4;
}

// SUB C (from A)
char op0x91(Boy* gb) {

	return 4;
}

// SUB D (from A)
char op0x92(Boy* gb) {

	return 4;
}

// SUB E (from A)
char op0x93(Boy* gb) {

	return 4;
}

// SUB H (from A)
char op0x94(Boy* gb) {

	return 4;
}

// SUB L (from A)
char op0x95(Boy* gb) {

	return 8;
}

// SUB (HL) (from A)
char op0x96(Boy* gb) {

	return 8;
}

// SUB # (from A)
char op0xD6(Boy* gb) {

	return 8;
}




// SBC A, A
char op0x9F(Boy* gb) {

	return 4;
}

// SBC A, B
char op0x98(Boy* gb) {

	return 4;
}

// SBC A, C
char op0x99(Boy* gb) {

	return 4;
}

// SBC A, D
char op0x9A(Boy* gb) {

	return 4;
}

// SBC A, E
char op0x9B(Boy* gb) {

	return 4;
}

// SBC A, H
char op0x9C(Boy* gb) {

	return 4;
}

// SBC A, L
char op0x9D(Boy* gb) {

	return 4;
}

// SBC A, (HL)
char op0x9E(Boy* gb) {

	return 8;
}

// SBC A, #
//char op0x??(Boy* gb) {
//	??
//	return ?;
//}




// AND A (with A)
char op0xA7(Boy* gb) {

	return 4;
}

// AND B (with A)
char op0xA0(Boy* gb) {

	return 4;
}

// AND C (with A)
char op0xA1(Boy* gb) {

	return 4;
}

// AND D (with A)
char op0xA2(Boy* gb) {

	return 4;
}

// AND E (with A)
char op0xA3(Boy* gb) {

	return 4;
}

// AND H (with A)
char op0xA4(Boy* gb) {

	return 4;
}

// AND L (with A)
char op0xA5(Boy* gb) {

	return 4;
}

// AND (HL) (with A)
char op0xA6(Boy* gb) {

	return 8;
}

// AND # (with A)
char op0xE6(Boy* gb) {

	return 8;
}




// OR A (with A)
char op0xB7(Boy* gb) {

	return 4;
}

// OR B (with A)
char op0xB0(Boy* gb) {

	return 4;
}

// OR C (with A)
char op0xB1(Boy* gb) {

	return 4;
}

// OR D (with A)
char op0xB2(Boy* gb) {

	return 4;
}

// OR E (with A)
char op0xB3(Boy* gb) {

	return 4;
}

// OR H (with A)
char op0xB4(Boy* gb) {

	return 4;
}

// OR L (with A)
char op0xB5(Boy* gb) {

	return 4;
}

// OR (HL) (with A)
char op0xB6(Boy* gb) {

	return 8;
}

// OR # (with A)
char op0xF6(Boy* gb) {

	return 8;
}





// XOR A (with A)
char op0xAF(Boy* gb) {

	return 4;
}

// XOR B (with A)
char op0xA8(Boy* gb) {

	return 4;
}

// XOR C (with A)
char op0xA9(Boy* gb) {

	return 4;
}

// XOR D (with A)
char op0xAA(Boy* gb) {

	return 4;
}

// XOR E (with A)
char op0xAB(Boy* gb) {

	return 4;
}

// XOR H (with A)
char op0xAC(Boy* gb) {

	return 4;
}

// XOR L (with A)
char op0xAD(Boy* gb) {

	return 4;
}

// XOR (HL) (with A)
char op0xAE(Boy* gb) {

	return 8;
}

// XOR # (with A)
char op0xEE(Boy* gb) {

	return 8;
}




// CP A (with A)
char op0xBF(Boy* gb) {

	return 4;
}

// CP B (with A)
char op0xB8(Boy* gb) {

	return 4;
}

// CP C (with A)
char op0xB9(Boy* gb) {

	return 4;
}

// CP D (with A)
char op0xBA(Boy* gb) {

	return 4;
}

// CP E (with A)
char op0xBB(Boy* gb) {

	return 4;
}

// CP H (with A)
char op0xBC(Boy* gb) {

	return 4;
}

// CP L (with A)
char op0xBD(Boy* gb) {

	return 4;
}

// CP (HL) (with A)
char op0xBE(Boy* gb) {

	return 8;
}

// CP # (with A)
char op0xFE(Boy* gb) {

	return 8;
}






// INC A
char op0x3C(Boy* gb) {

	return 4;
}

// INC B
char op0x04(Boy* gb) {

	return 4;
}

// INC C
char op0x0C(Boy* gb) {

	return 4;
}

// INC D
char op0x14(Boy* gb) {

	return 4;
}

// INC E
char op0x1C(Boy* gb) {

	return 4;
}

// INC H
char op0x24(Boy* gb) {

	return 4;
}

// INC L
char op0x2C(Boy* gb) {

	return 4;
}

// INC (HL)
char op0x34(Boy* gb) {

	return 12;
}






// DEC A
char op0x3D(Boy* gb) {

	return 4;
}

// DEC B
char op0x05(Boy* gb) {

	return 4;
}

// DEC C
char op0x0D(Boy* gb) {

	return 4;
}

// DEC D
char op0x15(Boy* gb) {

	return 4;
}

// DEC E
char op0x1D(Boy* gb) {

	return 4;
}

// DEC H
char op0x25(Boy* gb) {

	return 4;
}

// DEC L
char op0x2D(Boy* gb) {

	return 4;
}

// DEC (HL)
char op0x35(Boy* gb) {

	return 12;
}