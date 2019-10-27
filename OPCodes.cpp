#include "OPCodes.h"

OPCodeFn* opMap[0xFF];

OPCode executeCode(Boy *gb, unsigned char code) {
	OPCode opcode;
	opcode.code = code;
	opcode.cycles = 4;

	
	if (code == 0x01) {
		opMap[code](gb);
	}
	else if (code == 0x00) {
		opMap[code](gb);
	}

	return opcode;
}

char op0x00(Boy* gb) {
	return 4;
}

char op0x01(Boy* gb) {
	unsigned short pc = gb->incrementPC();
	unsigned short n = gb->getAddress2Bytes(pc);
	pc = gb->incrementPC(2);

	printf("0x00 BC,%02x", n);
	gb->setRegisterPair(REG_BC, gb->getAddress2Bytes(n));
	return 12;
}

void populateCodes() {
	opMap[0x00] = &op0x00;
	opMap[0x01] = &op0x01;
}