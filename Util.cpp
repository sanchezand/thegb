#include "Util.h"
#include <iostream>

void printBinary(uint8_t b) {
	char buffer[32];
	_itoa_s(b, buffer, 2);
	printf("%s\n", buffer);
}

void printBinary(uint16_t b) {
	char buffer[32];
	_itoa_s(b, buffer, 2);
	printf("%s\n", buffer);
}

void printHex(uint8_t b) {
	printf("%02x\n", b);
}

void printHex(uint16_t b) {
	printf("%04x\n", b);
}

uint16_t joinBytes16(uint8_t high, uint8_t low) {
	return high << 8 | low;
}

uint8_t joinBytes8(uint8_t high, uint8_t low) {
	return high << 4 | low;
}

uint8_t* separateBytes(uint16_t b) {
	static uint8_t bytes[2];
	bytes[0] = b >> 8;
	bytes[1] = b & (0xFF);
	return bytes;
}

uint8_t* separateBytes(uint8_t b) {
	static uint8_t bytes[2];
	bytes[0] = b >> 4;
	bytes[1] = b & (0xF);
	return bytes;
}

uint8_t swap(uint8_t b){
	uint8_t* sep = separateBytes(b);
	printf("%01x\n", sep[0]);
	printf("%01x\n", sep[1]);
	return joinBytes8(sep[1], sep[0]);
}

uint16_t swap(uint16_t b){
	uint8_t* sep = separateBytes(b);
	return joinBytes16(sep[1], sep[0]);
}
