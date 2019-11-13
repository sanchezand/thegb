#include "OPCodes.h"
#include "Util.h"

OPCodeFn* opMap[0xFF];

OPCode executeCode(Boy *gb, uint8_t code) {
	OPCode opcode;
	opcode.code = code;
	opcode.cycles = getOpFunction(code)(gb);

	return opcode;
}

OPCodeFn* getOpFunction(uint8_t code) {
	OPCodeFn* fn = opMap[code];
	if (fn == nullptr) {
		return &opDummy;
	}
	return fn;
}

char opDummy(Boy* gb) {
	printf("Missing implementation: 0x%02x\n", gb->getCurrentInstruction());
	return 0;
}

char op0xCB(Boy* gb) {
	return 0;
}

void populateCodes() {
	//printf("%i", &op0x00);

	//opMap[0x00] = &op0x00;
	//opMap[0x01] = &op0x01;
	//opMap[0x02] = &op0x02;
	//opMap[0x03] = &op0x03;
	//opMap[0x04] = &op0x04;
	//opMap[0x05] = &op0x05;
	//opMap[0x06] = &op0x06;
	//opMap[0x07] = &op0x07;
	//opMap[0x08] = &op0x08;
	//opMap[0x09] = &op0x09;
	//opMap[0x0A] = &op0x0A;
	//opMap[0x0B] = &op0x0B;
	//opMap[0x0C] = &op0x0C;
	//opMap[0x0D] = &op0x0D;
	//opMap[0x0E] = &op0x0E;
	//opMap[0x0F] = &op0x0F;

	//opMap[0x10] = &op0x10;
	//opMap[0x11] = &op0x11;
	//opMap[0x12] = &op0x12;
	//opMap[0x13] = &op0x13;
	//opMap[0x14] = &op0x14;
	//opMap[0x15] = &op0x15;
	//opMap[0x16] = &op0x16;
	//opMap[0x17] = &op0x17;
	//opMap[0x18] = &op0x18;
	//opMap[0x19] = &op0x19;
	//opMap[0x1A] = &op0x1A;
	//opMap[0x1B] = &op0x1B;
	//opMap[0x1C] = &op0x1C;
	//opMap[0x1D] = &op0x1D;
	//opMap[0x1E] = &op0x1E;
	//opMap[0x1F] = &op0x1F;

}