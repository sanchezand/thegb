#pragma once
#include "Boy.h"
#include <stdint.h>

struct OPCode {
	uint8_t code;
	const char* mnemonic;
	uint8_t cycles;
	bool cb;

	OPCode(uint8_t code, const char* mnemonic, uint8_t cycles) {
		this->code = code;
		this->mnemonic = mnemonic;
		this->cycles = cycles;
		this->cb = false;
	}

	OPCode(uint8_t code, const char* mnemonic, uint8_t cycles, bool cb) {
		this->code = code;
		this->mnemonic = mnemonic;
		this->cycles = cycles;
		this->cb = cb;
	}
};


typedef OPCode OPCodeFn(Boy* b);

OPCode executeCode(Boy* gb, uint8_t code);
OPCodeFn* getOpFunction(uint8_t code);

void populateCodes();

OPCode opDummy(Boy* gb);

OPCode op0x00(Boy* gb);
OPCode op0x01(Boy* gb);
OPCode op0x02(Boy* gb);
OPCode op0x03(Boy* gb);
OPCode op0x04(Boy* gb);
OPCode op0x05(Boy* gb);
OPCode op0x06(Boy* gb);
OPCode op0x07(Boy* gb);
OPCode op0x08(Boy* gb);
OPCode op0x09(Boy* gb);
OPCode op0x0A(Boy* gb);
OPCode op0x0B(Boy* gb);
OPCode op0x0C(Boy* gb);
OPCode op0x0D(Boy* gb);
OPCode op0x0E(Boy* gb);
OPCode op0x0F(Boy* gb);



OPCode op0x10(Boy* gb);
OPCode op0x11(Boy* gb);
OPCode op0x12(Boy* gb);
OPCode op0x13(Boy* gb);
OPCode op0x14(Boy* gb);
OPCode op0x15(Boy* gb);
OPCode op0x16(Boy* gb);
OPCode op0x17(Boy* gb);
OPCode op0x18(Boy* gb);
OPCode op0x19(Boy* gb);
OPCode op0x1A(Boy* gb);
OPCode op0x1B(Boy* gb);
OPCode op0x1C(Boy* gb);
OPCode op0x1D(Boy* gb);
OPCode op0x1E(Boy* gb);
OPCode op0x1F(Boy* gb);



OPCode op0x20(Boy* gb);
OPCode op0x21(Boy* gb);
OPCode op0x22(Boy* gb);
OPCode op0x23(Boy* gb);
OPCode op0x24(Boy* gb);
OPCode op0x25(Boy* gb);
OPCode op0x26(Boy* gb);
OPCode op0x27(Boy* gb);
OPCode op0x28(Boy* gb);
OPCode op0x29(Boy* gb);
OPCode op0x2A(Boy* gb);
OPCode op0x2B(Boy* gb);
OPCode op0x2C(Boy* gb);
OPCode op0x2D(Boy* gb);
OPCode op0x2E(Boy* gb);
OPCode op0x2F(Boy* gb);



OPCode op0x30(Boy* gb);
OPCode op0x31(Boy* gb);
OPCode op0x32(Boy* gb);
OPCode op0x33(Boy* gb);
OPCode op0x34(Boy* gb);
OPCode op0x35(Boy* gb);
OPCode op0x36(Boy* gb);
OPCode op0x37(Boy* gb);
OPCode op0x38(Boy* gb);
OPCode op0x39(Boy* gb);
OPCode op0x3A(Boy* gb);
OPCode op0x3B(Boy* gb);
OPCode op0x3C(Boy* gb);
OPCode op0x3D(Boy* gb);
OPCode op0x3E(Boy* gb);
OPCode op0x3F(Boy* gb);



OPCode op0x40(Boy* gb);
OPCode op0x41(Boy* gb);
OPCode op0x42(Boy* gb);
OPCode op0x43(Boy* gb);
OPCode op0x44(Boy* gb);
OPCode op0x45(Boy* gb);
OPCode op0x46(Boy* gb);
OPCode op0x47(Boy* gb);
OPCode op0x48(Boy* gb);
OPCode op0x49(Boy* gb);
OPCode op0x4A(Boy* gb);
OPCode op0x4B(Boy* gb);
OPCode op0x4C(Boy* gb);
OPCode op0x4D(Boy* gb);
OPCode op0x4E(Boy* gb);
OPCode op0x4F(Boy* gb);



OPCode op0x50(Boy* gb);
OPCode op0x51(Boy* gb);
OPCode op0x52(Boy* gb);
OPCode op0x53(Boy* gb);
OPCode op0x54(Boy* gb);
OPCode op0x55(Boy* gb);
OPCode op0x56(Boy* gb);
OPCode op0x57(Boy* gb);
OPCode op0x58(Boy* gb);
OPCode op0x59(Boy* gb);
OPCode op0x5A(Boy* gb);
OPCode op0x5B(Boy* gb);
OPCode op0x5C(Boy* gb);
OPCode op0x5D(Boy* gb);
OPCode op0x5E(Boy* gb);
OPCode op0x5F(Boy* gb);



OPCode op0x60(Boy* gb);
OPCode op0x61(Boy* gb);
OPCode op0x62(Boy* gb);
OPCode op0x63(Boy* gb);
OPCode op0x64(Boy* gb);
OPCode op0x65(Boy* gb);
OPCode op0x66(Boy* gb);
OPCode op0x67(Boy* gb);
OPCode op0x68(Boy* gb);
OPCode op0x69(Boy* gb);
OPCode op0x6A(Boy* gb);
OPCode op0x6B(Boy* gb);
OPCode op0x6C(Boy* gb);
OPCode op0x6D(Boy* gb);
OPCode op0x6E(Boy* gb);
OPCode op0x6F(Boy* gb);



OPCode op0x70(Boy* gb);
OPCode op0x71(Boy* gb);
OPCode op0x72(Boy* gb);
OPCode op0x73(Boy* gb);
OPCode op0x74(Boy* gb);
OPCode op0x75(Boy* gb);
OPCode op0x76(Boy* gb);
OPCode op0x77(Boy* gb);
OPCode op0x78(Boy* gb);
OPCode op0x79(Boy* gb);
OPCode op0x7A(Boy* gb);
OPCode op0x7B(Boy* gb);
OPCode op0x7C(Boy* gb);
OPCode op0x7D(Boy* gb);
OPCode op0x7E(Boy* gb);
OPCode op0x7F(Boy* gb);



OPCode op0x80(Boy* gb);
OPCode op0x81(Boy* gb);
OPCode op0x82(Boy* gb);
OPCode op0x83(Boy* gb);
OPCode op0x84(Boy* gb);
OPCode op0x85(Boy* gb);
OPCode op0x86(Boy* gb);
OPCode op0x87(Boy* gb);
OPCode op0x88(Boy* gb);
OPCode op0x89(Boy* gb);
OPCode op0x8A(Boy* gb);
OPCode op0x8B(Boy* gb);
OPCode op0x8C(Boy* gb);
OPCode op0x8D(Boy* gb);
OPCode op0x8E(Boy* gb);
OPCode op0x8F(Boy* gb);



OPCode op0x90(Boy* gb);
OPCode op0x91(Boy* gb);
OPCode op0x92(Boy* gb);
OPCode op0x93(Boy* gb);
OPCode op0x94(Boy* gb);
OPCode op0x95(Boy* gb);
OPCode op0x96(Boy* gb);
OPCode op0x97(Boy* gb);
OPCode op0x98(Boy* gb);
OPCode op0x99(Boy* gb);
OPCode op0x9A(Boy* gb);
OPCode op0x9B(Boy* gb);
OPCode op0x9C(Boy* gb);
OPCode op0x9D(Boy* gb);
OPCode op0x9E(Boy* gb);
OPCode op0x9F(Boy* gb);



OPCode op0xA0(Boy* gb);
OPCode op0xA1(Boy* gb);
OPCode op0xA2(Boy* gb);
OPCode op0xA3(Boy* gb);
OPCode op0xA4(Boy* gb);
OPCode op0xA5(Boy* gb);
OPCode op0xA6(Boy* gb);
OPCode op0xA7(Boy* gb);
OPCode op0xA8(Boy* gb);
OPCode op0xA9(Boy* gb);
OPCode op0xAA(Boy* gb);
OPCode op0xAB(Boy* gb);
OPCode op0xAC(Boy* gb);
OPCode op0xAD(Boy* gb);
OPCode op0xAE(Boy* gb);
OPCode op0xAF(Boy* gb);



OPCode op0xB0(Boy* gb);
OPCode op0xB1(Boy* gb);
OPCode op0xB2(Boy* gb);
OPCode op0xB3(Boy* gb);
OPCode op0xB4(Boy* gb);
OPCode op0xB5(Boy* gb);
OPCode op0xB6(Boy* gb);
OPCode op0xB7(Boy* gb);
OPCode op0xB8(Boy* gb);
OPCode op0xB9(Boy* gb);
OPCode op0xBA(Boy* gb);
OPCode op0xBB(Boy* gb);
OPCode op0xBC(Boy* gb);
OPCode op0xBD(Boy* gb);
OPCode op0xBE(Boy* gb);
OPCode op0xBF(Boy* gb);



OPCode op0xC0(Boy* gb);
OPCode op0xC1(Boy* gb);
OPCode op0xC2(Boy* gb);
OPCode op0xC3(Boy* gb);
OPCode op0xC4(Boy* gb);
OPCode op0xC5(Boy* gb);
OPCode op0xC6(Boy* gb);
OPCode op0xC7(Boy* gb);
OPCode op0xC8(Boy* gb);
OPCode op0xC9(Boy* gb);
OPCode op0xCA(Boy* gb);
OPCode op0xCB(Boy* gb);
OPCode op0xCC(Boy* gb);
OPCode op0xCD(Boy* gb);
OPCode op0xCE(Boy* gb);
OPCode op0xCF(Boy* gb);



OPCode op0xD0(Boy* gb);
OPCode op0xD1(Boy* gb);
OPCode op0xD2(Boy* gb);
// 
OPCode op0xD4(Boy* gb);
OPCode op0xD5(Boy* gb);
OPCode op0xD6(Boy* gb);
OPCode op0xD7(Boy* gb);
OPCode op0xD8(Boy* gb);
OPCode op0xD9(Boy* gb);
OPCode op0xDA(Boy* gb);
// 
OPCode op0xDC(Boy* gb);
//
OPCode op0xDE(Boy* gb);
OPCode op0xDF(Boy* gb);




OPCode op0xE0(Boy* gb);
OPCode op0xE1(Boy* gb);
OPCode op0xE2(Boy* gb);
//
//
OPCode op0xE5(Boy* gb);
OPCode op0xE6(Boy* gb);
OPCode op0xE7(Boy* gb);
OPCode op0xE8(Boy* gb);
OPCode op0xE9(Boy* gb);
OPCode op0xEA(Boy* gb);
//
//
//
OPCode op0xEE(Boy* gb);
OPCode op0xEF(Boy* gb);




OPCode op0xF0(Boy* gb);
OPCode op0xF1(Boy* gb);
OPCode op0xF2(Boy* gb);
OPCode op0xF3(Boy* gb);
//
OPCode op0xF5(Boy* gb);
OPCode op0xF6(Boy* gb);
OPCode op0xF7(Boy* gb);
OPCode op0xF8(Boy* gb);
OPCode op0xF9(Boy* gb);
OPCode op0xFA(Boy* gb);
OPCode op0xFB(Boy* gb);
//
//
OPCode op0xFE(Boy* gb);
OPCode op0xFF(Boy* gb);



// ----------------------
// --- CB CODES
// ----------------------

OPCode opCB0x00(Boy* gb);
OPCode opCB0x01(Boy* gb);
OPCode opCB0x02(Boy* gb);
OPCode opCB0x03(Boy* gb);
OPCode opCB0x04(Boy* gb);
OPCode opCB0x05(Boy* gb);
OPCode opCB0x06(Boy* gb);
OPCode opCB0x07(Boy* gb);
OPCode opCB0x08(Boy* gb);
OPCode opCB0x09(Boy* gb);
OPCode opCB0x0A(Boy* gb);
OPCode opCB0x0B(Boy* gb);
OPCode opCB0x0C(Boy* gb);
OPCode opCB0x0D(Boy* gb);
OPCode opCB0x0E(Boy* gb);
OPCode opCB0x0F(Boy* gb);

OPCode opCB0x10(Boy* gb);
OPCode opCB0x11(Boy* gb);
OPCode opCB0x12(Boy* gb);
OPCode opCB0x13(Boy* gb);
OPCode opCB0x14(Boy* gb);
OPCode opCB0x15(Boy* gb);
OPCode opCB0x16(Boy* gb);
OPCode opCB0x17(Boy* gb);
OPCode opCB0x18(Boy* gb);
OPCode opCB0x19(Boy* gb);
OPCode opCB0x1A(Boy* gb);
OPCode opCB0x1B(Boy* gb);
OPCode opCB0x1C(Boy* gb);
OPCode opCB0x1D(Boy* gb);
OPCode opCB0x1E(Boy* gb);
OPCode opCB0x1F(Boy* gb);

OPCode opCB0x20(Boy* gb);
OPCode opCB0x21(Boy* gb);
OPCode opCB0x22(Boy* gb);
OPCode opCB0x23(Boy* gb);
OPCode opCB0x24(Boy* gb);
OPCode opCB0x25(Boy* gb);
OPCode opCB0x26(Boy* gb);
OPCode opCB0x27(Boy* gb);
OPCode opCB0x28(Boy* gb);
OPCode opCB0x29(Boy* gb);
OPCode opCB0x2A(Boy* gb);
OPCode opCB0x2B(Boy* gb);
OPCode opCB0x2C(Boy* gb);
OPCode opCB0x2D(Boy* gb);
OPCode opCB0x2E(Boy* gb);
OPCode opCB0x2F(Boy* gb);

OPCode opCB0x30(Boy* gb);
OPCode opCB0x31(Boy* gb);
OPCode opCB0x32(Boy* gb);
OPCode opCB0x33(Boy* gb);
OPCode opCB0x34(Boy* gb);
OPCode opCB0x35(Boy* gb);
OPCode opCB0x36(Boy* gb);
OPCode opCB0x37(Boy* gb);
OPCode opCB0x38(Boy* gb);
OPCode opCB0x39(Boy* gb);
OPCode opCB0x3A(Boy* gb);
OPCode opCB0x3B(Boy* gb);
OPCode opCB0x3C(Boy* gb);
OPCode opCB0x3D(Boy* gb);
OPCode opCB0x3E(Boy* gb);
OPCode opCB0x3F(Boy* gb);


OPCode opCB0x40(Boy* gb);
OPCode opCB0x41(Boy* gb);
OPCode opCB0x42(Boy* gb);
OPCode opCB0x43(Boy* gb);
OPCode opCB0x44(Boy* gb);
OPCode opCB0x45(Boy* gb);
OPCode opCB0x46(Boy* gb);
OPCode opCB0x47(Boy* gb);
OPCode opCB0x48(Boy* gb);
OPCode opCB0x49(Boy* gb);
OPCode opCB0x4A(Boy* gb);
OPCode opCB0x4B(Boy* gb);
OPCode opCB0x4C(Boy* gb);
OPCode opCB0x4D(Boy* gb);
OPCode opCB0x4E(Boy* gb);
OPCode opCB0x4F(Boy* gb);


OPCode opCB0x50(Boy* gb);
OPCode opCB0x51(Boy* gb);
OPCode opCB0x52(Boy* gb);
OPCode opCB0x53(Boy* gb);
OPCode opCB0x54(Boy* gb);
OPCode opCB0x55(Boy* gb);
OPCode opCB0x56(Boy* gb);
OPCode opCB0x57(Boy* gb);
OPCode opCB0x58(Boy* gb);
OPCode opCB0x59(Boy* gb);
OPCode opCB0x5A(Boy* gb);
OPCode opCB0x5B(Boy* gb);
OPCode opCB0x5C(Boy* gb);
OPCode opCB0x5D(Boy* gb);
OPCode opCB0x5E(Boy* gb);
OPCode opCB0x5F(Boy* gb);


OPCode opCB0x60(Boy* gb);
OPCode opCB0x61(Boy* gb);
OPCode opCB0x62(Boy* gb);
OPCode opCB0x63(Boy* gb);
OPCode opCB0x64(Boy* gb);
OPCode opCB0x65(Boy* gb);
OPCode opCB0x66(Boy* gb);
OPCode opCB0x67(Boy* gb);
OPCode opCB0x68(Boy* gb);
OPCode opCB0x69(Boy* gb);
OPCode opCB0x6A(Boy* gb);
OPCode opCB0x6B(Boy* gb);
OPCode opCB0x6C(Boy* gb);
OPCode opCB0x6D(Boy* gb);
OPCode opCB0x6E(Boy* gb);
OPCode opCB0x6F(Boy* gb);


OPCode opCB0x70(Boy* gb);
OPCode opCB0x71(Boy* gb);
OPCode opCB0x72(Boy* gb);
OPCode opCB0x73(Boy* gb);
OPCode opCB0x74(Boy* gb);
OPCode opCB0x75(Boy* gb);
OPCode opCB0x76(Boy* gb);
OPCode opCB0x77(Boy* gb);
OPCode opCB0x78(Boy* gb);
OPCode opCB0x79(Boy* gb);
OPCode opCB0x7A(Boy* gb);
OPCode opCB0x7B(Boy* gb);
OPCode opCB0x7C(Boy* gb);
OPCode opCB0x7D(Boy* gb);
OPCode opCB0x7E(Boy* gb);
OPCode opCB0x7F(Boy* gb);


OPCode opCB0x80(Boy* gb);
OPCode opCB0x81(Boy* gb);
OPCode opCB0x82(Boy* gb);
OPCode opCB0x83(Boy* gb);
OPCode opCB0x84(Boy* gb);
OPCode opCB0x85(Boy* gb);
OPCode opCB0x86(Boy* gb);
OPCode opCB0x87(Boy* gb);
OPCode opCB0x88(Boy* gb);
OPCode opCB0x89(Boy* gb);
OPCode opCB0x8A(Boy* gb);
OPCode opCB0x8B(Boy* gb);
OPCode opCB0x8C(Boy* gb);
OPCode opCB0x8D(Boy* gb);
OPCode opCB0x8E(Boy* gb);
OPCode opCB0x8F(Boy* gb);


OPCode opCB0x90(Boy* gb);
OPCode opCB0x91(Boy* gb);
OPCode opCB0x92(Boy* gb);
OPCode opCB0x93(Boy* gb);
OPCode opCB0x94(Boy* gb);
OPCode opCB0x95(Boy* gb);
OPCode opCB0x96(Boy* gb);
OPCode opCB0x97(Boy* gb);
OPCode opCB0x98(Boy* gb);
OPCode opCB0x99(Boy* gb);
OPCode opCB0x9A(Boy* gb);
OPCode opCB0x9B(Boy* gb);
OPCode opCB0x9C(Boy* gb);
OPCode opCB0x9D(Boy* gb);
OPCode opCB0x9E(Boy* gb);
OPCode opCB0x9F(Boy* gb);


OPCode opCB0xA0(Boy* gb);
OPCode opCB0xA1(Boy* gb);
OPCode opCB0xA2(Boy* gb);
OPCode opCB0xA3(Boy* gb);
OPCode opCB0xA4(Boy* gb);
OPCode opCB0xA5(Boy* gb);
OPCode opCB0xA6(Boy* gb);
OPCode opCB0xA7(Boy* gb);
OPCode opCB0xA8(Boy* gb);
OPCode opCB0xA9(Boy* gb);
OPCode opCB0xAA(Boy* gb);
OPCode opCB0xAB(Boy* gb);
OPCode opCB0xAC(Boy* gb);
OPCode opCB0xAD(Boy* gb);
OPCode opCB0xAE(Boy* gb);
OPCode opCB0xAF(Boy* gb);


OPCode opCB0xB0(Boy* gb);
OPCode opCB0xB1(Boy* gb);
OPCode opCB0xB2(Boy* gb);
OPCode opCB0xB3(Boy* gb);
OPCode opCB0xB4(Boy* gb);
OPCode opCB0xB5(Boy* gb);
OPCode opCB0xB6(Boy* gb);
OPCode opCB0xB7(Boy* gb);
OPCode opCB0xB8(Boy* gb);
OPCode opCB0xB9(Boy* gb);
OPCode opCB0xBA(Boy* gb);
OPCode opCB0xBB(Boy* gb);
OPCode opCB0xBC(Boy* gb);
OPCode opCB0xBD(Boy* gb);
OPCode opCB0xBE(Boy* gb);
OPCode opCB0xBF(Boy* gb);


OPCode opCB0xC0(Boy* gb);
OPCode opCB0xC1(Boy* gb);
OPCode opCB0xC2(Boy* gb);
OPCode opCB0xC3(Boy* gb);
OPCode opCB0xC4(Boy* gb);
OPCode opCB0xC5(Boy* gb);
OPCode opCB0xC6(Boy* gb);
OPCode opCB0xC7(Boy* gb);
OPCode opCB0xC8(Boy* gb);
OPCode opCB0xC9(Boy* gb);
OPCode opCB0xCA(Boy* gb);
OPCode opCB0xCB(Boy* gb);
OPCode opCB0xCC(Boy* gb);
OPCode opCB0xCD(Boy* gb);
OPCode opCB0xCE(Boy* gb);
OPCode opCB0xCF(Boy* gb);


OPCode opCB0xD0(Boy* gb);
OPCode opCB0xD1(Boy* gb);
OPCode opCB0xD2(Boy* gb);
OPCode opCB0xD3(Boy* gb);
OPCode opCB0xD4(Boy* gb);
OPCode opCB0xD5(Boy* gb);
OPCode opCB0xD6(Boy* gb);
OPCode opCB0xD7(Boy* gb);
OPCode opCB0xD8(Boy* gb);
OPCode opCB0xD9(Boy* gb);
OPCode opCB0xDA(Boy* gb);
OPCode opCB0xDB(Boy* gb);
OPCode opCB0xDC(Boy* gb);
OPCode opCB0xDD(Boy* gb);
OPCode opCB0xDE(Boy* gb);
OPCode opCB0xDF(Boy* gb);


OPCode opCB0xE0(Boy* gb);
OPCode opCB0xE1(Boy* gb);
OPCode opCB0xE2(Boy* gb);
OPCode opCB0xE3(Boy* gb);
OPCode opCB0xE4(Boy* gb);
OPCode opCB0xE5(Boy* gb);
OPCode opCB0xE6(Boy* gb);
OPCode opCB0xE7(Boy* gb);
OPCode opCB0xE8(Boy* gb);
OPCode opCB0xE9(Boy* gb);
OPCode opCB0xEA(Boy* gb);
OPCode opCB0xEB(Boy* gb);
OPCode opCB0xEC(Boy* gb);
OPCode opCB0xED(Boy* gb);
OPCode opCB0xEE(Boy* gb);
OPCode opCB0xEF(Boy* gb);


OPCode opCB0xF0(Boy* gb);
OPCode opCB0xF1(Boy* gb);
OPCode opCB0xF2(Boy* gb);
OPCode opCB0xF3(Boy* gb);
OPCode opCB0xF4(Boy* gb);
OPCode opCB0xF5(Boy* gb);
OPCode opCB0xF6(Boy* gb);
OPCode opCB0xF7(Boy* gb);
OPCode opCB0xF8(Boy* gb);
OPCode opCB0xF9(Boy* gb);
OPCode opCB0xFA(Boy* gb);
OPCode opCB0xFB(Boy* gb);
OPCode opCB0xFC(Boy* gb);
OPCode opCB0xFD(Boy* gb);
OPCode opCB0xFE(Boy* gb);
OPCode opCB0xFF(Boy* gb);