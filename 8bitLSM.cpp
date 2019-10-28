#include "OPCodes.h"

// LD B, n
char op0x06(Boy* gb) {
	gb->loadNextToRegister(REG_B);
	return 8;
}

// LD C, n
char op0x0E(Boy* gb) {
	gb->loadNextToRegister(REG_C);
	return 8;
}

// LD D, n
char op0x16(Boy* gb) {
	gb->loadNextToRegister(REG_D);
	return 8;
}

// LD E, n
char op0x1E(Boy* gb) {
	gb->loadNextToRegister(REG_E);
	return 8;
}

// LD H, n
char op0x26(Boy* gb) {
	gb->loadNextToRegister(REG_H);
	return 8;
}

// LD L, n
char op0x2E(Boy* gb) {
	gb->loadNextToRegister(REG_L);
	return 8;
}




// LD B, B
char op0x40(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_B));
	return 4;
}

// LD B, C
char op0x41(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_C));
	return 4;
}

// LD B, D
char op0x42(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_D));
	return 4;
}

// LD B, E
char op0x43(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_E));
	return 4;
}

// LD B, H
char op0x44(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_H));
	return 4;
}

// LD B, L
char op0x45(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_L));
	return 4;
}

// LD C, B
char op0x48(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_B));
	return 4;
}

// LD C, C
char op0x49(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_C));
	return 4;
}

// LD C, D
char op0x4A(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_D));
	return 4;
}

// LD C, E
char op0x4B(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_E));
	return 4;
}

// LD C, H
char op0x4C(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_H));
	return 4;
}

// LD C, L
char op0x4D(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_L));
	return 4;
}

// LD C, (HL)
char op0x4E(Boy* gb) {
	gb->setRegister(REG_C, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return 8;
}

// LD D, B
char op0x50(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_B));
	return 4;
}

// LD D, C
char op0x51(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_C));
	return 4;
}

// LD D, D
char op0x52(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_D));
	return 4;
}

// LD D, E
char op0x53(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_E));
	return 4;
}

// LD D, H
char op0x54(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_H));
	return 4;
}

// LD D, L
char op0x55(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_L));
	return 4;
}

// LD D, (HL)
char op0x56(Boy* gb) {
	gb->setRegister(REG_D, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return 8;
}

// LD E, B
char op0x58(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_B));
	return 4;
}

// LD E, C
char op0x59(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_C));
	return 4;
}

// LD E, D
char op0x5A(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_D));
	return 4;
}

// LD E, E
char op0x5B(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_E));
	return 4;
}

// LD E, H
char op0x5C(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_H));
	return 4;
}

// LD E, L
char op0x5D(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_L));
	return 4;
}

// LD E, (HL)
char op0x5E(Boy* gb) {
	gb->setRegister(REG_E, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return 8;
}

// LD H, B
char op0x60(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_B));
	return 4;
}

// LD H, C
char op0x61(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_C));
	return 4;
}

// LD H, D
char op0x62(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_D));
	return 4;
}

// LD H, E
char op0x63(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_E));
	return 4;
}

// LD H, H
char op0x64(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_H));
	return 4;
}

// LD H, L
char op0x65(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_L));
	return 4;
}

// LD H, (HL)
char op0x66(Boy* gb) {
	gb->setRegister(REG_H, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return 8;
}

// LD L, B
char op0x68(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_B));
	return 4;
}

// LD L, C
char op0x69(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_C));
	return 4;
}

// LD L, D
char op0x6A(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_D));
	return 4;
}

// LD L, E
char op0x6B(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_E));
	return 4;
}

// LD L, H
char op0x6C(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_H));
	return 4;
}

// LD L, L
char op0x6D(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_L));
	return 4;
}

// LD L, (HL)
char op0x6E(Boy* gb) {
	gb->setRegister(REG_L, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return 8;
}

// LD (HL), B 
char op0x70(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_B));
	return 8;
}

// LD (HL), C 
char op0x71(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_C));
	return 8;
}

// LD (HL), D 
char op0x72(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_D));
	return 8;
}

// LD (HL), E
char op0x73(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_E));
	return 8;
}

// LD (HL), H 
char op0x74(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_H));
	return 8;
}

// LD (HL), L
char op0x75(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_L));
	return 8;
}

// LD (HL), n
char op0x36(Boy* gb) {
	unsigned char n = gb->getNextInstruction();
	gb->setAddress(gb->getRegisterPair(REG_HL), n);
	return 8;
}




// LD A, A
char op0x7F(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_A));
	return 4;
}

// LD A, B
char op0x78(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_B));
	return 4;
}

// LD A, C
char op0x79(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_C));
	return 4;
}

// LD A, D
char op0x7A(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_D));
	return 4;
}

// LD A, E
char op0x7B(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_E));
	return 4;
}

// LD A, H
char op0x7C(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_H));
	return 4;
}

// LD A, L
char op0x7D(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_L));
	return 4;
}

// LD A, (BC)
char op0x0A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_BC)));
	return 8;
}

// LD A, (DE)
char op0x1A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_DE)));
	return 8;
}

// LD A, (HL)
char op0x7E(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return 8;
}

// LD A, (nn)
char op0xFA(Boy* gb) {
	unsigned short nn = gb->getNextInstructionPair();
	gb->setRegister(REG_A, gb->getAddress(nn));
	return 16;
}

// LD A, #
char op0x3E(Boy* gb) {
	gb->loadNextToRegister(REG_A);
	return 8;
}




// LD B, A
char op0x47(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_A));
	return 4;
}

// LD C, A
char op0x4F(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_A));
	return 4;
}

// LD D, A
char op0x57(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_A));
	return 4;
}

// LD E, A
char op0x5F(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_A));
	return 4;
}

// LD H, A
char op0x67(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_A));
	return 4;
}

// LD L, A
char op0x6F(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_A));
	return 4;
}

// LD (BC), A
char op0x02(Boy* gb) {
	unsigned short n = gb->getRegisterPair(REG_BC);
	gb->setAddress(n, gb->getRegister(REG_A));
	return 8;
}

// LD (DE), A
char op0x12(Boy* gb) {
	unsigned short n = gb->getRegisterPair(REG_DE);
	gb->setAddress(n, gb->getRegister(REG_A));
	return 8;
}

// LD (HL), A
char op0x77(Boy* gb) {
	unsigned short n = gb->getRegisterPair(REG_HL);
	gb->setAddress(n, gb->getRegister(REG_A));
	return 8;
}

// LD (nn), A
char op0xEA(Boy* gb) {
	unsigned short n = gb->getNextInstructionPair();
	gb->setAddress(n, gb->getRegister(REG_A));
	return 8;
}





// LD A, (C)
char op0xF2(Boy* gb) {
	unsigned short dir = 0xFF00 + gb->getRegister(REG_C);
	unsigned char val = gb->getAddress(dir);
	gb->setRegister(REG_A, val);
	return 8;
}

// LD (C), A
char op0xE2(Boy* gb) {
	unsigned short dir = 0xFF00 + gb->getRegister(REG_C);
	gb->setAddress(dir, gb->getRegister(REG_A));
	return 8;
}

// LD A, (HLD)
// LD A, (HL-)
// LDD A, (HL)
char op0x3A(Boy* gb) {
	unsigned short HL = gb->getAddress(gb->getRegisterPair(REG_HL));
	gb->setRegister(REG_A, HL);
	gb->decrementRegister(REG_HL);
	return 8;
}

// LD (HLD), A
// LD (HL-), A
// LDD (HL), A
char op0x32(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_A));
	gb->decrementRegister(REG_HL);
	return 8;
}

// LD A, (HLI)
// LD A, (HL+)
// LDI A, (HL)
char op0x2A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_HL)));
	gb->incrementRegister(REG_HL);
	return 8;
}

// LD (HLI), A
// LD (HL+), A
// LDI (HL), A
char op0x22(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_A));
	gb->incrementRegister(REG_HL);
	return 8;
}

// LDH (n), A
char op0xE0(Boy* gb) {
	unsigned char n = gb->getNextInstruction();
	gb->setAddress((0xFF00 + n), gb->getRegister(REG_A));
	return 12;
}

// LDH A, (n)
char op0xF0(Boy* gb) {
	unsigned char n = gb->getNextInstruction();
	gb->setRegister(REG_A, gb->getAddress((0xFF00 + n)));
	return 12;
}