#include <iostream>
#include <SDL.h>
#include "Boy.h"
#undef main

Boy *boy;

int main(){

	const char* cartPath = "E:\\Tetris.gb";

	boy = new Boy();
	boy->init(160, 144);
	boy->loadCartridge(cartPath);
	boy->printCartridgeInfo();

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