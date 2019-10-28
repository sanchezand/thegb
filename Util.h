#pragma once

void printBinary(unsigned char b);
void printBinary(unsigned short b);

void printHex(unsigned char b);
void printHex(unsigned short b);

unsigned short joinBytes(unsigned char high, unsigned char low);
unsigned char* separateBytes(unsigned short b);