#pragma once
#include <stdint.h>

void printBinary(uint8_t b);
void printBinary(uint16_t b);

void printHex(uint8_t b);
void printHex(uint16_t b);

uint16_t joinBytes16(uint8_t high, uint8_t low);
uint8_t joinBytes8(uint8_t high, uint8_t low);
uint8_t* separateBytes(uint16_t b);

uint8_t swap(uint8_t b);
uint16_t swap(uint16_t b);