#include <iostream>
#include <SDL.h>
#include "Boy.h"
#include "Util.h"
#include "OPCodes.h"
#undef main

Boy *boy;

int main(){

	const char* cartPath = "E:\\cpu_instrs.gb";

	boy = new Boy();
	boy->init(160, 144);
	boy->loadCartridge(cartPath);
	boy->printCartridgeInfo();

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