#include "OPCodes.h"

// LD B, n
OPCode op0x06(Boy* gb) {
	gb->loadNextToRegister(REG_B);
	return OPCode(0x06, "LD B, n", 8);
}

// LD C, n
OPCode op0x0E(Boy* gb) {
	gb->loadNextToRegister(REG_C);
	return OPCode(0x0E, "LD C, n", 8);
}

// LD D, n
OPCode op0x16(Boy* gb) {
	gb->loadNextToRegister(REG_D);
	return OPCode(0x16, "LD D, n", 8);
}

// LD E, n
OPCode op0x1E(Boy* gb) {
	gb->loadNextToRegister(REG_E);
	return OPCode(0x1E, "LD E, n", 8);
}

// LD H, n
OPCode op0x26(Boy* gb) {
	gb->loadNextToRegister(REG_H);
	return OPCode(0x26, "LD H, n", 8);
}

// LD L, n
OPCode op0x2E(Boy* gb) {
	gb->loadNextToRegister(REG_L);
	return OPCode(0x2E, "LD L, n", 8);
}




// LD B, B
OPCode op0x40(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_B));
	return OPCode(0x40, "LD B, B", 4);
}

// LD B, C
OPCode op0x41(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_C));
	return OPCode(0x41, "LD B, C", 4);
}

// LD B, D
OPCode op0x42(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_D));
	return OPCode(0x42, "LD B, D", 4);
}

// LD B, E
OPCode op0x43(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_E));
	return OPCode(0x43, "LD B, E", 4);
}

// LD B, H
OPCode op0x44(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_H));
	return OPCode(0x44, "LD B, H", 4);
}

// LD B, L
OPCode op0x45(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_L));
	return OPCode(0x45, "LD B, L", 4);
}

// LD B, (HL)
OPCode op0x46(Boy* gb) {
	gb->setRegister(REG_B, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x46, "LD B, (HL)", 8);
}



// LD C, B
OPCode op0x48(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_B));
	return OPCode(0x48, "LD C, B", 4);
}

// LD C, C
OPCode op0x49(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_C));
	return OPCode(0x49, "LD C, C", 4);
}

// LD C, D
OPCode op0x4A(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_D));
	return OPCode(0x4A, "LD C, D", 4);
}

// LD C, E
OPCode op0x4B(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_E));
	return OPCode(0x4B, "LD C, E", 4);
}

// LD C, H
OPCode op0x4C(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_H));
	return OPCode(0x4C, "LD C, H", 4);
}

// LD C, L
OPCode op0x4D(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_L));
	return OPCode(0x4D, "LD C, L", 4);
}

// LD C, (HL)
OPCode op0x4E(Boy* gb) {
	gb->setRegister(REG_C, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x4E, "LD C, (HL)", 8);
}

// LD D, B
OPCode op0x50(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_B));
	return OPCode(0x50, "LD D, B", 4);
}

// LD D, C
OPCode op0x51(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_C));
	return OPCode(0x51, "LD D, C", 4);
}

// LD D, D
OPCode op0x52(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_D));
	return OPCode(0x52, "LD D, D", 4);
}

// LD D, E
OPCode op0x53(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_E));
	return OPCode(0x53, "LD D, E", 4);
}

// LD D, H
OPCode op0x54(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_H));
	return OPCode(0x54, "LD D, H", 4);
}

// LD D, L
OPCode op0x55(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_L));
	return OPCode(0x55, "LD D, L", 4);
}

// LD D, (HL)
OPCode op0x56(Boy* gb) {
	gb->setRegister(REG_D, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x56, "LD D, (HL)", 8);
}

// LD E, B
OPCode op0x58(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_B));
	return OPCode(0x58, "LD E, B", 4);
}

// LD E, C
OPCode op0x59(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_C));
	return OPCode(0x59, "LD E, C", 4);
}

// LD E, D
OPCode op0x5A(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_D));
	return OPCode(0x5A, "LD E, D", 4);
}

// LD E, E
OPCode op0x5B(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_E));
	return OPCode(0x5B, "LD E, E", 4);
}

// LD E, H
OPCode op0x5C(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_H));
	return OPCode(0x5C, "LD E, H", 4);
}

// LD E, L
OPCode op0x5D(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_L));
	return OPCode(0x5D, "LD E, L", 4);
}

// LD E, (HL)
OPCode op0x5E(Boy* gb) {
	gb->setRegister(REG_E, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x5E, "LD E, (HL)", 8);
}

// LD H, B
OPCode op0x60(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_B));
	return OPCode(0x60, "LD H, B", 4);
}

// LD H, C
OPCode op0x61(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_C));
	return OPCode(0x61, "LD H, C", 4);
}

// LD H, D
OPCode op0x62(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_D));
	return OPCode(0x62, "LD H, D", 4);
}

// LD H, E
OPCode op0x63(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_E));
	return OPCode(0x63, "LD H, E", 4);
}

// LD H, H
OPCode op0x64(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_H));
	return OPCode(0x64, "LD H, H", 4);
}

// LD H, L
OPCode op0x65(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_L));
	return OPCode(0x65, "LD H, L", 4);
}

// LD H, (HL)
OPCode op0x66(Boy* gb) {
	gb->setRegister(REG_H, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x66, "LD H, (HL)", 8);
}

// LD L, B
OPCode op0x68(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_B));
	return OPCode(0x68, "LD L, B", 4);
}

// LD L, C
OPCode op0x69(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_C));
	return OPCode(0x69, "LD L, C", 4);
}

// LD L, D
OPCode op0x6A(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_D));
	return OPCode(0x6A, "LD L, D", 4);
}

// LD L, E
OPCode op0x6B(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_E));
	return OPCode(0x6B, "LD L, E", 4);
}

// LD L, H
OPCode op0x6C(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_H));
	return OPCode(0x6C, "LD L, H", 4);
}

// LD L, L
OPCode op0x6D(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_L));
	return OPCode(0x6D, "LD L, L", 4);
}

// LD L, (HL)
OPCode op0x6E(Boy* gb) {
	gb->setRegister(REG_L, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x6E, "LD L, (HL)", 8);
}

// LD (HL), B 
OPCode op0x70(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_B));
	return OPCode(0x70, "LD (HL), B", 8);
}

// LD (HL), C 
OPCode op0x71(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_C));
	return OPCode(0x71, "LD (HL), C", 8);
}

// LD (HL), D 
OPCode op0x72(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_D));
	return OPCode(0x72, "LD (HL), D", 8);
}

// LD (HL), E
OPCode op0x73(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_E));
	return OPCode(0x73, "LD (HL), E", 8);
}

// LD (HL), H 
OPCode op0x74(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_H));
	return OPCode(0x74, "LD (HL), H", 8);
}

// LD (HL), L
OPCode op0x75(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_L));
	return OPCode(0x75, "LD (HL), L", 8);
}

// LD (HL), n
OPCode op0x36(Boy* gb) {
	uint8_t n = gb->getNextInstruction();
	gb->setAddress(gb->getRegisterPair(REG_HL), n);
	return OPCode(0x36, "LD (HL), n", 8);
}




// LD A, A
OPCode op0x7F(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_A));
	return OPCode(0x7F, "LD A, A", 4);
}

// LD A, B
OPCode op0x78(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_B));
	return OPCode(0x78, "LD A, B", 4);
}

// LD A, C
OPCode op0x79(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_C));
	return OPCode(0x79, "LD A, C", 4);
}

// LD A, D
OPCode op0x7A(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_D));
	return OPCode(0x7A, "LD A, D", 4);
}

// LD A, E
OPCode op0x7B(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_E));
	return OPCode(0x7B, "LD A, E", 4);
}

// LD A, H
OPCode op0x7C(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_H));
	return OPCode(0x7C, "LD A, H", 4);
}

// LD A, L
OPCode op0x7D(Boy* gb) {
	gb->setRegister(REG_A, gb->getRegister(REG_L));
	return OPCode(0x7D, "LD A, L", 4);
}

// LD A, (BC)
OPCode op0x0A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_BC)));
	return OPCode(0x0A, "LD A, (BC)", 8);
}

// LD A, (DE)
OPCode op0x1A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_DE)));
	return OPCode(0x1A, "LD A, (DE)", 8);
}

// LD A, (HL)
OPCode op0x7E(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_HL)));
	return OPCode(0x7E, "LD A, (HL)", 8);
}

// LD A, (nn)
OPCode op0xFA(Boy* gb) {
	uint16_t nn = gb->getNextInstructionPair();
	gb->setRegister(REG_A, gb->getAddress(nn));
	return OPCode(0xFA, "LD A, (nn)", 16);
}

// LD A, #
OPCode op0x3E(Boy* gb) {
	gb->loadNextToRegister(REG_A);
	return OPCode(0x3E, "LD A, #", 8);
}




// LD B, A
OPCode op0x47(Boy* gb) {
	gb->setRegister(REG_B, gb->getRegister(REG_A));
	return OPCode(0x47, "LD B, A", 4);
}

// LD C, A
OPCode op0x4F(Boy* gb) {
	gb->setRegister(REG_C, gb->getRegister(REG_A));
	return OPCode(0x4F, "LD C, A", 4);
}

// LD D, A
OPCode op0x57(Boy* gb) {
	gb->setRegister(REG_D, gb->getRegister(REG_A));
	return OPCode(0x57, "LD D, A", 4);
}

// LD E, A
OPCode op0x5F(Boy* gb) {
	gb->setRegister(REG_E, gb->getRegister(REG_A));
	return OPCode(0x5F, "LD E, A", 4);
}

// LD H, A
OPCode op0x67(Boy* gb) {
	gb->setRegister(REG_H, gb->getRegister(REG_A));
	return OPCode(0x67, "LD H, A", 4);
}

// LD L, A
OPCode op0x6F(Boy* gb) {
	gb->setRegister(REG_L, gb->getRegister(REG_A));
	return OPCode(0x6F, "LD L, A", 4);
}

// LD (BC), A
OPCode op0x02(Boy* gb) {
	uint16_t n = gb->getRegisterPair(REG_BC);
	gb->setAddress(n, gb->getRegister(REG_A));
	return OPCode(0x02, "LD (BC), A", 8);
}

// LD (DE), A
OPCode op0x12(Boy* gb) {
	uint16_t n = gb->getRegisterPair(REG_DE);
	gb->setAddress(n, gb->getRegister(REG_A));
	return OPCode(0x12, "LD (DE), A", 8);
}

// LD (HL), A
OPCode op0x77(Boy* gb) {
	uint16_t n = gb->getRegisterPair(REG_HL);
	gb->setAddress(n, gb->getRegister(REG_A));
	return OPCode(0x77, "LD (HL), A", 8);
}

// LD (nn), A
OPCode op0xEA(Boy* gb) {
	uint16_t n = gb->getNextInstructionPair();
	gb->setAddress(n, gb->getRegister(REG_A));
	return OPCode(0xEA, "LD (nn), A", 8);
}





// LD A, (C)
OPCode op0xF2(Boy* gb) {
	uint16_t dir = 0xFF00 + gb->getRegister(REG_C);
	uint8_t val = gb->getAddress(dir);
	gb->setRegister(REG_A, val);
	return OPCode(0xF2, "LD A, (C)", 8);
}

// LD (C), A
OPCode op0xE2(Boy* gb) {
	uint16_t dir = 0xFF00 + gb->getRegister(REG_C);
	gb->setAddress(dir, gb->getRegister(REG_A));
	return OPCode(0xE2, "LD (C), A", 8);
}

// LD A, (HLD)
// LD A, (HL-)
// LDD A, (HL)
OPCode op0x3A(Boy* gb) {
	uint16_t HL = gb->getAddress(gb->getRegisterPair(REG_HL));
	gb->setRegister(REG_A, HL);
	gb->decrementRegister(REG_HL);
	return OPCode(0x3A, "LD A, (HL-)", 8);
}

// LD (HLD), A
// LD (HL-), A
// LDD (HL), A
OPCode op0x32(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_A));
	gb->decrementRegister(REG_HL);
	return OPCode(0x32, "LD (HL-), A", 8);
}

// LD A, (HLI)
// LD A, (HL+)
// LDI A, (HL)
OPCode op0x2A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegisterPair(REG_HL)));
	gb->incrementRegister(REG_HL);
	return OPCode(0x2A, "LD A, (HL+)", 8);
}

// LD (HLI), A
// LD (HL+), A
// LDI (HL), A
OPCode op0x22(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_HL), gb->getRegister(REG_A));
	gb->incrementRegister(REG_HL);
	return OPCode(0x22, "LD (HL+), A", 8);
}

// LDH (n), A
OPCode op0xE0(Boy* gb) {
	uint8_t n = gb->getNextInstruction();
	gb->setAddress((0xFF00 + n), gb->getRegister(REG_A));
	return OPCode(0xE0, "LD (n), A", 12);
}

// LDH A, (n)
OPCode op0xF0(Boy* gb) {
	uint8_t n = gb->getNextInstruction();
	gb->setRegister(REG_A, gb->getAddress((0xFF00 + n)));
	return OPCode(0x0, "LD A, (n)", 12);
}