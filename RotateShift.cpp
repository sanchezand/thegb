#include "OPCodes.h"

void op_rlc(Boy* gb, Register r) {
	uint8_t val = gb->getRegister(r);
	val <<= 1;

	if ((val & 0x80) != 0) {
		gb->setFlag(FLAG_C, true);
		val |= 0x1;
	}else{
		gb->clearFlags();
	}
	gb->setRegister(r, val); 

}

// RLCA
OPCode op0x07(Boy* gb) {
	op_rlc(gb, REG_A);
	return OPCode(0x07, "RLCA", 4);
}

// RLA
OPCode op0x17(Boy* gb) {

	return OPCode(0x17, "RLA", 4);
}

// RRCA
OPCode op0x0F(Boy* gb) {
	return OPCode(0x0F, "RRCA", 4);
}

// RRA
OPCode op0x1F(Boy* gb) {
	return OPCode(0x1F, "RRA", 4);
}






// RLC A
OPCode opCB0x07(Boy* gb) {

	return OPCode(0x07, "RLC A", 8, true);
}

// RLC B
OPCode opCB0x00(Boy* gb) {

	return OPCode(0x00, "RLC B", 8, true);
}

// RLC C
OPCode opCB0x01(Boy* gb) {

	return OPCode(0x01, "RLC C", 8, true);
}

// RLC D
OPCode opCB0x02(Boy* gb) {

	return OPCode(0x02, "RLC D", 8, true);
}

// RLC E
OPCode opCB0x03(Boy* gb) {

	return OPCode(0x03, "RLC E", 8, true);
}

// RLC H
OPCode opCB0x04(Boy* gb) {

	return OPCode(0x04, "RLC H", 8, true);
}

// RLC L
OPCode opCB0x05(Boy* gb) {

	return OPCode(0x05, "RLC L", 8, true);
}

// RLC (HL)
OPCode opCB0x06(Boy* gb) {

	return OPCode(0x06, "RLC (HL)", 16, true);
}




// RL A
OPCode opCB0x17(Boy* gb) {

	return OPCode(0x17, "RL A", 8, true);
}

// RL B
OPCode opCB0x10(Boy* gb) {

	return OPCode(0x10, "RL B", 8, true);
}

// RL C
OPCode opCB0x11(Boy* gb) {

	return OPCode(0x11, "RL C", 8, true);
}

// RL D
OPCode opCB0x12(Boy* gb) {

	return OPCode(0x12, "RL D", 8, true);
}

// RL E
OPCode opCB0x13(Boy* gb) {

	return OPCode(0x13, "RL E", 8, true);
}

// RL H
OPCode opCB0x14(Boy* gb) {

	return OPCode(0x14, "RL H", 8, true);
}

// RL L
OPCode opCB0x15(Boy* gb) {

	return OPCode(0x15, "RL L", 8, true);
}

// RL (HL)
OPCode opCB0x16(Boy* gb) {

	return OPCode(0x11, "RL (HL)", 16, true);
}






// RRC A
OPCode opCB0x0F(Boy* gb) {

	return OPCode(0x0F, "RRC A", 8, true);
}

// RRC B
OPCode opCB0x08(Boy* gb) {

	return OPCode(0x08, "RRC B", 8, true);
}

// RRC C
OPCode opCB0x09(Boy* gb) {

	return OPCode(0x09, "RRC C", 8, true);
}

// RRC D
OPCode opCB0x0A(Boy* gb) {

	return OPCode(0x0A, "RRC D", 8, true);
}

// RRC E
OPCode opCB0x0B(Boy* gb) {

	return OPCode(0x0B, "RRC E", 8, true);
}

// RRC H
OPCode opCB0x0C(Boy* gb) {

	return OPCode(0x0C, "RRC H", 8, true);
}

// RRC L
OPCode opCB0x0D(Boy* gb) {

	return OPCode(0x0D, "RRC L", 8, true);
}

// RRC (HL)
OPCode opCB0x0E(Boy* gb) {

	return OPCode(0x0E, "RRC (HL)", 16, true);
}





// RR A
OPCode opCB0x1F(Boy* gb) {

	return OPCode(0x1F, "RR A", 8, true);
}

// RR B
OPCode opCB0x18(Boy* gb) {

	return OPCode(0x18, "RR B", 8, true);
}

// RR C
OPCode opCB0x19(Boy* gb) {

	return OPCode(0x19, "RR C", 8, true);
}

// RR D
OPCode opCB0x1A(Boy* gb) {

	return OPCode(0x1A, "RR D", 8, true);
}

// RR E
OPCode opCB0x1B(Boy* gb) {

	return OPCode(0x1B, "RR E", 8, true);
}

// RR H
OPCode opCB0x1C(Boy* gb) {

	return OPCode(0x1C, "RR H", 8, true);
}

// RR L
OPCode opCB0x1D(Boy* gb) {

	return OPCode(0x1D, "RR L", 8, true);
}

// RR (HL)
OPCode opCB0x1E(Boy* gb) {

	return OPCode(0x1E, "RR (HL)", 16, true);
}







// SLA A
OPCode opCB0x27(Boy* gb) {

	return OPCode(0x27, "SLA A", 8, true);
}

// SLA B
OPCode opCB0x20(Boy* gb) {

	return OPCode(0x20, "SLA B", 8, true);
}

// SLA C
OPCode opCB0x21(Boy* gb) {

	return OPCode(0x21, "SLA C", 8, true);
}

// SLA D
OPCode opCB0x22(Boy* gb) {

	return OPCode(0x22, "SLA D", 8, true);
}

// SLA E
OPCode opCB0x23(Boy* gb) {

	return OPCode(0x23, "SLA E", 8, true);
}

// SLA H
OPCode opCB0x24(Boy* gb) {

	return OPCode(0x24, "SLA H", 8, true);
}

// SLA L
OPCode opCB0x25(Boy* gb) {

	return OPCode(0x25, "SLA L", 8, true);
}

// SLA (HL)
OPCode opCB0x26(Boy* gb) {

	return OPCode(0x26, "SLA (HL)", 16, true);
}




// SRA A
OPCode opCB0x2F(Boy* gb) {

	return OPCode(0x2F, "SRA A", 8, true);
}

// SRA B
OPCode opCB0x28(Boy* gb) {

	return OPCode(0x28, "SRA B", 8, true);
}

// SRA C
OPCode opCB0x29(Boy* gb) {

	return OPCode(0x29, "SRA C", 8, true);
}

// SRA D
OPCode opCB0x2A(Boy* gb) {

	return OPCode(0x2A, "SRA D", 8, true);
}

// SRA E
OPCode opCB0x2B(Boy* gb) {

	return OPCode(0x2B, "SRA E", 8, true);
}

// SRA H
OPCode opCB0x2C(Boy* gb) {

	return OPCode(0x2C, "SRA H", 8, true);
}

// SRA L
OPCode opCB0x2D(Boy* gb) {

	return OPCode(0x2D, "SRA L", 8, true);
}

// SRA (HL)
OPCode opCB0x2E(Boy* gb) {

	return OPCode(0x2E, "SRA (HL)", 16, true);
}





// SRL A
OPCode opCB0x3F(Boy* gb) {

	return OPCode(0x3F, "SRL A", 8, true);
}

// SRL B
OPCode opCB0x38(Boy* gb) {

	return OPCode(0x38, "SRL B", 8, true);
}

// SRL C
OPCode opCB0x39(Boy* gb) {

	return OPCode(0x39, "SRL C", 8, true);
}

// SRL D
OPCode opCB0x3A(Boy* gb) {

	return OPCode(0x3A, "SRL D", 8, true);
}

// SRL E
OPCode opCB0x3B(Boy* gb) {

	return OPCode(0x3B, "SRL E", 8, true);
}

// SRL H
OPCode opCB0x3C(Boy* gb) {

	return OPCode(0x3C, "SRL H", 8, true);
}

// SRL L
OPCode opCB0x3D(Boy* gb) {

	return OPCode(0x3D, "SRL L", 8, true);
}

// SRL (HL)
OPCode opCB0x3E(Boy* gb) {

	return OPCode(0x3E, "SRL (HL)", 16, true);
}