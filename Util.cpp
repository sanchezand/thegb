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

unsigned short joinBytes(unsigned char high, unsigned char low) {
	return high << 8 | low;
}

unsigned char* separateBytes(unsigned short b) {
	static unsigned char bytes[2];
	bytes[0] = b >> 8;
	bytes[1] = b & (0xFF);
	return bytes;
}

unsigned char* separateBytes(unsigned char b) {
	static unsigned char bytes[2];
	bytes[0] = b >> 4;
	bytes[1] = b & (0xF);
	return bytes;
}