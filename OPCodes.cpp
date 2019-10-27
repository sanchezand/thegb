#include "OPCodes.h"
#include "Util.h"

OPCodeFn* opMap[0xFF];

OPCode executeCode(Boy *gb, unsigned char code) {
	OPCode opcode;
	opcode.code = code;
	opcode.cycles = getOpFunction(code)(gb);

	return opcode;
}

OPCodeFn* getOpFunction(unsigned char code) {
	OPCodeFn* fn = opMap[code];
	if (fn == nullptr) {
		return &opDummy;
	}
	return fn;
}

char opDummy(Boy* gb) {
	return 0;
}

//NOP
char op0x00(Boy* gb) {
	return 4;
}

// LD BC, nn
char op0x01(Boy* gb) {
	unsigned short pc = gb->incrementPC();
	unsigned short n = gb->getAddress2Bytes(pc);
	pc = gb->incrementPC();
	gb->setRegisterPair(REG_BC, gb->getAddress2Bytes(n));
	return 12;
}

// LD (BC), A
char op0x02(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_BC), gb->getRegister(REG_A));
	return 8;
}

// INC BC
char op0x03(Boy* gb) {
	gb->incrementRegister(REG_BC);
	return 8;
}

// INC B
char op0x04(Boy* gb) {
	gb->incrementRegister(REG_B);
	return 4;
}

// DEC B
char op0x05(Boy* gb) {
	gb->decrementRegister(REG_B);
	return 4;
}

// LD B, n
char op0x06(Boy* gb) {
	unsigned short pc = gb->incrementPC();
	unsigned char n = gb->getAddress(pc);
	gb->setAddress(n, gb->getRegister(REG_B));
	return 8;
}

// RLCA
char op0x07(Boy* gb) {
	unsigned short A = gb->getRegister(REG_A);
	bool bit = (A >> 0b1000000);
	gb->setRegister(REG_A, A << 1);
	//printf("BIT: %i\n\n", bit);
	//A = (A << 1) | (A << 15);
	//printBinary(A);
	return 4;
}

//LD nn,SP
char op0x08(Boy* gb) {
	unsigned short pc = gb->incrementPC();
	unsigned short n = gb->getAddress2Bytes(pc);

	printf("0x08 - N: ");
	printHex(n);

	gb->setSP(n);
	return 20;
}

// ADD HL,BC
char op0x09(Boy* gb) {
	unsigned short HL = gb->getRegisterPair(REG_HL);
	unsigned short BC = gb->getRegisterPair(REG_BC);

	gb->setRegisterPair(REG_HL, HL + BC);
	gb->setFlag(FLAG_N, false);
	gb->setFlag(FLAG_C, HL + BC > 0xFFFF);
	gb->setFlag(FLAG_H, ((HL & 0x0FFF)+(BC & 0x0FFF))>0x0FFF);

	printBinary((unsigned short)(HL & 0x0FFF));

	return 8;
}

// LD A, (BC)
char op0x0A(Boy* gb) {
	gb->setRegister(REG_A, gb->getAddress(gb->getRegister(REG_BC)));
	return 8;
}

// DEC BC
char op0x0B(Boy* gb) {
	gb->decrementRegister(REG_BC);
	return 8;
}

// INC C
char op0x0C(Boy* gb) {
	gb->incrementRegister(REG_C);
	return 4;
}

// DEC C
char op0x0D(Boy* gb) {
	gb->decrementRegister(REG_C);
	return 4;
}

// LB C, n
char op0x0E(Boy* gb) {
	unsigned char pc = gb->incrementPC();
	unsigned char n = gb->getAddress(pc);

	gb->setAddress(n, gb->getRegister(REG_C));
	return 8;
}

// RRCA
char op0x0F(Boy* gb) {
	unsigned char A = gb->getRegister(REG_A);
	bool bit = (A >> 0b0000001);
	A = A >> 1;
	gb->setRegister(REG_A, A);
	gb->setFlag(FLAG_Z, A == 0x00);
	gb->setFlag(FLAG_N, false);
	gb->setFlag(FLAG_H, false);
	gb->setFlag(FLAG_C, bit);
	
	// CHECK THIS
	return 4;
}

// STOP
char op0x10(Boy* gb) {
	return 0;
}

// LD DE,nn
char op0x11(Boy* gb) {
	unsigned short pc = gb->incrementPC();
	unsigned short n = gb->getAddress2Bytes(pc);
	pc = gb->incrementPC();
	gb->setRegisterPair(REG_DE, gb->getAddress2Bytes(n));
	return 12;
}

// LD (DE), A
char op0x12(Boy* gb) {
	gb->setAddress(gb->getRegisterPair(REG_DE), gb->getRegister(REG_A));
	return 8;
}

// INC DE
char op0x13(Boy* gb) {
	gb->incrementRegister(REG_DE);
	return 8;
}

// INC D
char op0x14(Boy* gb) {
	gb->incrementRegister(REG_D);
	return 4;
}

// DEC D
char op0x15(Boy* gb) {
	gb->decrementRegister(REG_D);
	return 4;
}

// LD D, n
char op0x16(Boy* gb) {
	unsigned char pc = gb->incrementPC();
	unsigned char n = gb->getAddress(pc);

	gb->setAddress(n, gb->getRegister(REG_D));
	return 8;
}

// RLA
char op0x17(Boy* gb) {

	return 4;
}

// 
char op0x18(Boy* gb) {

	return 12;
}

// 
char op0x19(Boy* gb) {

	return 8;
}

// 
char op0x1A(Boy* gb) {

	return 8;
}

// 
char op0x1B(Boy* gb) {

	return 8;
}

// 
char op0x1C(Boy* gb) {

	return 4;
}

// 
char op0x1D(Boy* gb) {

	return 4;
}

// 
char op0x1E(Boy* gb) {

	return 8;
}

// 
char op0x1F(Boy* gb) {

	return 4;
}

void populateCodes() {
	opMap[0x00] = &op0x00;
	opMap[0x01] = &op0x01;
	opMap[0x02] = &op0x02;
	opMap[0x03] = &op0x03;
	opMap[0x04] = &op0x04;
	opMap[0x05] = &op0x05;
	opMap[0x06] = &op0x06;
	opMap[0x07] = &op0x07;
	opMap[0x08] = &op0x08;
	opMap[0x09] = &op0x09;
	opMap[0x0A] = &op0x0A;
	opMap[0x0B] = &op0x0B;
	opMap[0x0C] = &op0x0C;
	opMap[0x0D] = &op0x0D;
	opMap[0x0E] = &op0x0E;
	opMap[0x0F] = &op0x0F;

	opMap[0x10] = &op0x10;
	opMap[0x11] = &op0x11;
	opMap[0x12] = &op0x12;
	opMap[0x13] = &op0x13;
	opMap[0x14] = &op0x14;
	opMap[0x15] = &op0x15;
	opMap[0x16] = &op0x16;
	opMap[0x17] = &op0x17;
	opMap[0x18] = &op0x18;
	opMap[0x19] = &op0x19;
	opMap[0x1A] = &op0x1A;
	opMap[0x1B] = &op0x1B;
	opMap[0x1C] = &op0x1C;
	opMap[0x1D] = &op0x1D;
	opMap[0x1E] = &op0x1E;
	opMap[0x1F] = &op0x1F;

}