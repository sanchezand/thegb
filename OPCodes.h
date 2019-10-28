#pragma once
#include "Boy.h"

typedef char OPCodeFn (Boy* b);

struct OPCode {
	unsigned char code;
	char cycles;
};

OPCode executeCode(Boy* gb, unsigned char code);
OPCodeFn* getOpFunction(unsigned char code);

void populateCodes();

char opDummy(Boy* gb);

char op0x00(Boy* gb);
char op0x01(Boy* gb);
char op0x02(Boy* gb);
char op0x03(Boy* gb);
char op0x04(Boy* gb);
char op0x05(Boy* gb);
char op0x06(Boy* gb);
char op0x07(Boy* gb);
char op0x08(Boy* gb);
char op0x09(Boy* gb);
char op0x0A(Boy* gb);
char op0x0B(Boy* gb);
char op0x0C(Boy* gb);
char op0x0D(Boy* gb);
char op0x0E(Boy* gb);
char op0x0F(Boy* gb);



char op0x10(Boy* gb);
char op0x11(Boy* gb);
char op0x12(Boy* gb);
char op0x13(Boy* gb);
char op0x14(Boy* gb);
char op0x15(Boy* gb);
char op0x16(Boy* gb);
char op0x17(Boy* gb);
char op0x18(Boy* gb);
char op0x19(Boy* gb);
char op0x1A(Boy* gb);
char op0x1B(Boy* gb);
char op0x1C(Boy* gb);
char op0x1D(Boy* gb);
char op0x1E(Boy* gb);
char op0x1F(Boy* gb);



char op0x20(Boy* gb);
char op0x21(Boy* gb);
char op0x22(Boy* gb);
char op0x23(Boy* gb);
char op0x24(Boy* gb);
char op0x25(Boy* gb);
char op0x26(Boy* gb);
char op0x27(Boy* gb);
char op0x28(Boy* gb);
char op0x29(Boy* gb);
char op0x2A(Boy* gb);
char op0x2B(Boy* gb);
char op0x2C(Boy* gb);
char op0x2D(Boy* gb);
char op0x2E(Boy* gb);
char op0x2F(Boy* gb);



char op0x30(Boy* gb);
char op0x31(Boy* gb);
char op0x32(Boy* gb);
char op0x33(Boy* gb);
char op0x34(Boy* gb);
char op0x35(Boy* gb);
char op0x36(Boy* gb);
char op0x37(Boy* gb);
char op0x38(Boy* gb);
char op0x39(Boy* gb);
char op0x3A(Boy* gb);
char op0x3B(Boy* gb);
char op0x3C(Boy* gb);
char op0x3D(Boy* gb);
char op0x3E(Boy* gb);
char op0x3F(Boy* gb);



char op0x40(Boy* gb);
char op0x41(Boy* gb);
char op0x42(Boy* gb);
char op0x43(Boy* gb);
char op0x44(Boy* gb);
char op0x45(Boy* gb);
char op0x46(Boy* gb);
char op0x47(Boy* gb);
char op0x48(Boy* gb);
char op0x49(Boy* gb);
char op0x4A(Boy* gb);
char op0x4B(Boy* gb);
char op0x4C(Boy* gb);
char op0x4D(Boy* gb);
char op0x4E(Boy* gb);
char op0x4F(Boy* gb);



char op0x50(Boy* gb);
char op0x51(Boy* gb);
char op0x52(Boy* gb);
char op0x53(Boy* gb);
char op0x54(Boy* gb);
char op0x55(Boy* gb);
char op0x56(Boy* gb);
char op0x57(Boy* gb);
char op0x58(Boy* gb);
char op0x59(Boy* gb);
char op0x5A(Boy* gb);
char op0x5B(Boy* gb);
char op0x5C(Boy* gb);
char op0x5D(Boy* gb);
char op0x5E(Boy* gb);
char op0x5F(Boy* gb);



char op0x60(Boy* gb);
char op0x61(Boy* gb);
char op0x62(Boy* gb);
char op0x63(Boy* gb);
char op0x64(Boy* gb);
char op0x65(Boy* gb);
char op0x66(Boy* gb);
char op0x67(Boy* gb);
char op0x68(Boy* gb);
char op0x69(Boy* gb);
char op0x6A(Boy* gb);
char op0x6B(Boy* gb);
char op0x6C(Boy* gb);
char op0x6D(Boy* gb);
char op0x6E(Boy* gb);
char op0x6F(Boy* gb);



char op0x70(Boy* gb);
char op0x71(Boy* gb);
char op0x72(Boy* gb);
char op0x73(Boy* gb);
char op0x74(Boy* gb);
char op0x75(Boy* gb);
char op0x76(Boy* gb);
char op0x77(Boy* gb);
char op0x78(Boy* gb);
char op0x79(Boy* gb);
char op0x7A(Boy* gb);
char op0x7B(Boy* gb);
char op0x7C(Boy* gb);
char op0x7D(Boy* gb);
char op0x7E(Boy* gb);
char op0x7F(Boy* gb);



char op0x80(Boy* gb);
char op0x81(Boy* gb);
char op0x82(Boy* gb);
char op0x83(Boy* gb);
char op0x84(Boy* gb);
char op0x85(Boy* gb);
char op0x86(Boy* gb);
char op0x87(Boy* gb);
char op0x88(Boy* gb);
char op0x89(Boy* gb);
char op0x8A(Boy* gb);
char op0x8B(Boy* gb);
char op0x8C(Boy* gb);
char op0x8D(Boy* gb);
char op0x8E(Boy* gb);
char op0x8F(Boy* gb);



char op0x90(Boy* gb);
char op0x91(Boy* gb);
char op0x92(Boy* gb);
char op0x93(Boy* gb);
char op0x94(Boy* gb);
char op0x95(Boy* gb);
char op0x96(Boy* gb);
char op0x97(Boy* gb);
char op0x98(Boy* gb);
char op0x99(Boy* gb);
char op0x9A(Boy* gb);
char op0x9B(Boy* gb);
char op0x9C(Boy* gb);
char op0x9D(Boy* gb);
char op0x9E(Boy* gb);
char op0x9F(Boy* gb);



char op0xA0(Boy* gb);
char op0xA1(Boy* gb);
char op0xA2(Boy* gb);
char op0xA3(Boy* gb);
char op0xA4(Boy* gb);
char op0xA5(Boy* gb);
char op0xA6(Boy* gb);
char op0xA7(Boy* gb);
char op0xA8(Boy* gb);
char op0xA9(Boy* gb);
char op0xAA(Boy* gb);
char op0xAB(Boy* gb);
char op0xAC(Boy* gb);
char op0xAD(Boy* gb);
char op0xAE(Boy* gb);
char op0xAF(Boy* gb);



char op0xB0(Boy* gb);
char op0xB1(Boy* gb);
char op0xB2(Boy* gb);
char op0xB3(Boy* gb);
char op0xB4(Boy* gb);
char op0xB5(Boy* gb);
char op0xB6(Boy* gb);
char op0xB7(Boy* gb);
char op0xB8(Boy* gb);
char op0xB9(Boy* gb);
char op0xBA(Boy* gb);
char op0xBB(Boy* gb);
char op0xBC(Boy* gb);
char op0xBD(Boy* gb);
char op0xBE(Boy* gb);
char op0xBF(Boy* gb);



char op0xC0(Boy* gb);
char op0xC1(Boy* gb);
char op0xC2(Boy* gb);
char op0xC3(Boy* gb);
char op0xC4(Boy* gb);
char op0xC5(Boy* gb);
char op0xC6(Boy* gb);
char op0xC7(Boy* gb);
char op0xC8(Boy* gb);
char op0xC9(Boy* gb);
char op0xCA(Boy* gb);
// char op0xCB(Boy* gb);
char op0xCC(Boy* gb);
char op0xCD(Boy* gb);
char op0xCE(Boy* gb);
char op0xCF(Boy* gb);



char op0xD0(Boy* gb);
char op0xD1(Boy* gb);
char op0xD2(Boy* gb);
// 
char op0xD4(Boy* gb);
char op0xD5(Boy* gb);
char op0xD6(Boy* gb);
char op0xD7(Boy* gb);
char op0xD8(Boy* gb);
char op0xD9(Boy* gb);
char op0xDA(Boy* gb);
// 
char op0xDC(Boy* gb);
//
char op0xDE(Boy* gb);
char op0xDF(Boy* gb);




char op0xE0(Boy* gb);
char op0xE1(Boy* gb);
char op0xE2(Boy* gb);
//
//
char op0xE5(Boy* gb);
char op0xE6(Boy* gb);
char op0xE7(Boy* gb);
char op0xE8(Boy* gb);
char op0xE9(Boy* gb);
char op0xEA(Boy* gb);
//
//
//
char op0xEE(Boy* gb);
char op0xEF(Boy* gb);




char op0xF0(Boy* gb);
char op0xF1(Boy* gb);
char op0xF2(Boy* gb);
char op0xF3(Boy* gb);
//
char op0xF5(Boy* gb);
char op0xF6(Boy* gb);
char op0xF7(Boy* gb);
char op0xF8(Boy* gb);
char op0xF9(Boy* gb);
char op0xFA(Boy* gb);
char op0xFB(Boy* gb);
//
//
char op0xFE(Boy* gb);
char op0xFF(Boy* gb);