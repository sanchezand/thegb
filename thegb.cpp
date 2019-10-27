#include <iostream>
#include <SDL.h>
#include "Boy.h"
#include "Util.h"
#undef main

Boy *boy;

int main(){

	const char* cartPath = "E:\\Tetris.gb";

	boy = new Boy();
	boy->init(160, 144);
	boy->loadCartridge(cartPath);
	boy->printCartridgeInfo();

	//printBinary(joinBytes(0b1001, 0b0001));
	boy->jumpPC(0x101);
	printf("0x%02x\n", boy->getCurrentInstruction());
	printf("0x%04x", boy->getNextInstructionPair());

	//unsigned short b = 0b11011001;
	//printBinary(b);
	//unsigned char b2 = b >> 4;
	//printBinary(b2);
	////unsigned char b3 = b & 0b00001111;
	//unsigned char b3 = b & (0xF);
	//printBinary(b3);
	
	//SDL_Event event;
	//while (true) {
	//	while (SDL_PollEvent(&event)) {
	//		switch (event.type) {
	//		case SDL_MOUSEMOTION:
	//			//printf("LMAO");
	//			break;
	//		case SDL_KEYUP:
	//			//printf("%d", event.key.keysym.scancode);
	//			break;
	//		case SDL_WINDOWEVENT:
	//			switch (event.window.event) {
	//			case SDL_WINDOWEVENT_CLOSE:
	//				return 1;
	//			}
	//			break;
	//		}

	//	}
	//}
	return 1;
}