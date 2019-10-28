#pragma once
#include <SDL.h>
#include "Cartridge.h"

enum Flag {
	FLAG_Z, FLAG_N, FLAG_H, FLAG_C
};

enum Register {
	REG_A, REG_F, REG_B, REG_C, REG_D, REG_E, REG_H, REG_L, REG_AF, REG_BC, REG_DE, REG_HL
};

class Boy {
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
	unsigned char* getRegisterDir(Register r);
	Cartridge *cartridge;

	unsigned char RAM_BANK1[4096];
	unsigned char RAM_BANK2[4096];
	unsigned char VRAM[8192];

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
	bool getFlag(Flag f);
	void setFlag(Flag f, bool set);
	unsigned char getAddress(unsigned short dir);
	unsigned short getAddress2Bytes(int dir);
	unsigned char getCurrentInstruction();
	unsigned char getNextInstruction();
	unsigned char getNextInstruction(bool increment);
	unsigned short getNextInstructionPair();
	unsigned short getNextInstructionPair(bool increment);
	unsigned short getPC();
	unsigned short incrementPC();
	unsigned short incrementPC(int count);
	
	unsigned short getStatus();
	unsigned char getRegister(Register r);
	unsigned short getRegisterPair(Register r);
	void setRegisterPair(Register r, unsigned short val);
	void setRegister(Register r, unsigned char val);
	void incrementRegister(Register r);
	void incrementRegister(Register r, int count);
	void decrementRegister(Register r);
	void decrementRegister(Register r, int count);
	void addRegisters(Register dest, Register adding);
	void loadNextToRegister(Register r);
	void loadNextPairToRegister(Register r);

	void pushStack(Register r);
	void popStack(Register r);

	void setSP(unsigned short sp);
	unsigned short getSP();
	unsigned short jumpPC(unsigned short pc);
	unsigned char getAddressRam(unsigned short dir, bool bus);
	void setAddress(int dir, unsigned char val);
	void setAddressPair(unsigned short dir, unsigned short val);
	void setAddressRam(int dir, unsigned char val);
};