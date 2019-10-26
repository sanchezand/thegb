#include "Boy.h"

void Boy::init(const char * title, int w, int h){
	this->title = title;
	this->w = w;
	this->h = h;
}

void Boy::showWindow() {
	SDL_Init(SDL_INIT_EVERYTHING);
	this->window = SDL_CreateWindow(this->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->w, this->h, SDL_WINDOW_SHOWN);
	this->renderer = SDL_CreateRenderer(this->window, -1, 0);

	SDL_RenderPresent(this->renderer);

	this->running = true;
}

void Boy::tick() {

}

void Boy::handleKey(SDL_KeyboardEvent e) {
	
}

void Boy::printCartridgeInfo(){
	if (this->cartridge == nullptr) {
		printf("No cartridge initialized.\n");
		return;
	}
	printf("\nType: %02x\n", cartridge->getAddress(0x147));
	printf("ROM: %02x\n", cartridge->getAddress(0x148));
	printf("RAM: %02x\n", cartridge->getAddress(0x149));
	printf("Region: %02x\n", cartridge->getAddress(0x14A));
	printf("HeaderCheck: %i\n", cartridge->checkHeaderChecksum());
	printf("GlobalCheck: %i\n", cartridge->checkGlobalChecksum());
}

void Boy::loadCartridge(Cartridge *cart) {
	this->cartridge = cart;
	this->startCartridge();
}

void Boy::loadCartridge(const char* cartPath) {
	Cartridge *c;
	c = new Cartridge(cartPath);
	this->cartridge = c;
	this->startCartridge();
}

bool Boy::startCartridge() {
	if (this->cartridge == nullptr || !this->cartridge->checkGlobalChecksum() || !this->cartridge->checkHeaderChecksum) {
		return false;
	}



	return true;
}