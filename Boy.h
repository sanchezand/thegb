#pragma once
#include <SDL.h>
#include "Cartridge.h"

enum FLAG {
	FLAG_Z, FLAG_N, FLAG_H, FLAG_C
};

enum REGISTER {
	REG_A, REG_F, REG_B, REG_C, REG_D, REG_E, REG_H, REG_L, REG_AF, REG_BC, REG_DE, REG_HL
};

class Boy {
public:
	void init(int w, int h);
	void handleKey(SDL_KeyboardEvent kc); // Change to something else
	void tick();
	void printCartridgeInfo();
	void loadCartridge(Cartridge *cart);
	void loadCartridge(const char* cartPath);
	bool startCartridge();
	void powerUp();
	void loop();
	bool getFlag(FLAG f);
	void setFlag(FLAG f, bool set);
	unsigned char getAddress(int dir);
	unsigned short getAddress2Bytes(int dir);
	unsigned char getNextInstruction();
	unsigned char getNextInstruction(bool increment);
	unsigned short incrementPC();
	unsigned short incrementPC(int count);
	
	unsigned short getStatus();
	unsigned char getRegister(REGISTER r);
	unsigned short getRegisterPair(REGISTER r);
	void setRegisterPair(REGISTER r, unsigned short val);
	void setRegister(REGISTER r, unsigned char val);
	void incrementRegister(REGISTER r);
	void incrementRegister(REGISTER r, int count);
	void decrementRegister(REGISTER r);
	void decrementRegister(REGISTER r, int count);

	void setSP(unsigned short sp);
	unsigned short jumpPC(unsigned short pc);
	unsigned char getAddressRam(unsigned short dir, bool bus);
	void setAddress(int dir, unsigned char val);
	void setAddressRam(int dir, unsigned char val);

private:
	bool running;
	SDL_Window *window;
	SDL_Renderer *renderer;
	const char* title;
	int w, h;
	unsigned char status;
	unsigned char A, F, B, C, D, E, H, L;
	unsigned short pc = 0x100;
	unsigned short sp;
	unsigned char* getRegisterDir(REGISTER r);
	Cartridge *cartridge;

	unsigned char RAM_BANK1[4096];
	unsigned char RAM_BANK2[4096];
	unsigned char VRAM[8192];
};