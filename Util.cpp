#include "Util.h"
#include <iostream>

void printBinary(unsigned char b) {
	char buffer[32];
	_itoa_s(b, buffer, 2);
	printf("%s\n", buffer);
}

void printBinary(unsigned short b) {
	char buffer[32];
	_itoa_s(b, buffer, 2);
	printf("%s\n", buffer);
}

void printHex(unsigned char b) {
	printf("%02x\n", b);
}

void printHex(unsigned short b) {
	printf("%04x\n", b);
}