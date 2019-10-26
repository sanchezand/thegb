#pragma once
#include <SDL.h>
#include "Cartridge.h"
class Boy {
public:
	void init(const char* title, int w, int h);
	void handleKey(SDL_KeyboardEvent kc); // Change to something else
	void tick();
	void printCartridgeInfo();
	void loadCartridge(Cartridge *cart);
	void loadCartridge(const char* cartPath);
	bool startCartridge();
	void showWindow();

private:
	bool running;
	SDL_Window *window;
	SDL_Renderer *renderer;
	const char* title;
	int w, h;
	unsigned char A, F, B, C, D, E, H, L;
	unsigned short pc;
	unsigned short sp;
	Cartridge *cartridge;
};