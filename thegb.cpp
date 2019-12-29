#include <iostream>
#include <SDL.h>
#include "Boy.h"
#include "Util.h"
#include "OPCodes.h"
#undef main

Boy *boy;

int main(){

	const char* cartPath = "E:\\thegbtests.gb";
	
	boy = new Boy();
	boy->init(160, 144);
	//boy->loadCartridge(cartPath);
	//boy->printCartridgeInfo();





	//uint16_t test = 0x20FF;
	//boy->pushStack(test);

	//printf("HIGH: %x\n", boy->popStack());
	//printf("LOW: %x\n", boy->popStack());

	//boy->pushStack(test);
	//printf("16BIT: %i\n", boy->popStack16());





	//boy->pushStack(0x40);
	//uint8_t l = boy->stackTop();

	//boy->pushStack(0x32);
	//uint8_t h = boy->stackTop();

	//printHex(joinBytes16(h, l));

	//boy->pushStack(0x93);
	//printHex(boy->stackTop());

	//boy->popStack();
	//printHex(boy->stackTop());

	//boy->popStack();
	//printHex(boy->stackTop());

	//boy->popStack();
	//printHex(boy->stackTop());

	//uint16_t b = 0b11011001;
	//printBinary(b);
	//uint8_t b2 = b >> 4;
	//printBinary(b2);
	////uint8_t b3 = b & 0b00001111;
	//uint8_t b3 = b & (0xF);
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