#pragma once
#include <stdint.h>
#include <SDL.h>
#include "Cartridge.h"

enum Flag {
	FLAG_Z, FLAG_N, FLAG_H, FLAG_C, FLAG_SUB
};

enum Register {
	REG_A, REG_F, REG_B, REG_C, REG_D, REG_E, REG_H, REG_L, REG_AF, REG_BC, REG_DE, REG_HL
};

class Boy {
private:
	bool running, interrupts, halt, display, stop;
	SDL_Window *window;
	SDL_Renderer *renderer;
	const char* title;
	int w, h;
	uint8_t status;
	uint8_t A, F, B, C, D, E, H, L;
	uint16_t pc = 0x100;
	uint16_t sp = 0xFFFE;
	uint8_t* getRegisterDir(Register r);
	Cartridge *cartridge;

	uint8_t RAM_BANK1[4096];
	uint8_t RAM_BANK2[4096];
	uint8_t VRAM[8192];

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
	void clearFlags();
	bool getFlag(Flag f);
	void setFlag(Flag f, bool set);
	uint8_t getAddress(uint16_t dir);
	uint16_t getAddress2Bytes(int dir);
	uint8_t getCurrentInstruction();
	uint8_t getNextInstruction();
	uint8_t getNextInstruction(bool increment);
	uint16_t getNextInstructionPair();
	uint16_t getNextInstructionPair(bool increment);
	uint16_t getPC();
	uint16_t incrementPC();
	uint16_t incrementPC(int count);
	
	uint16_t getStatus();
	uint8_t getRegister(Register r);
	uint16_t getRegisterPair(Register r);
	void setRegisterPair(Register r, uint16_t val);
	void setRegister(Register r, uint8_t val);
	void incrementRegister(Register r);
	void incrementRegister(Register r, int count);
	void decrementRegister(Register r);
	void decrementRegister(Register r, int count);
	void addRegisters(Register dest, Register adding);
	void loadNextToRegister(Register r);
	void loadNextPairToRegister(Register r);

	void pushStack(uint8_t push);
	void pushStack(uint16_t push);
	uint8_t stackTop();
	uint16_t stackTop16();
	uint8_t popStack();
	uint16_t popStack16();

	void setSP(uint16_t sp);
	uint16_t getSP();
	uint16_t jumpPC(uint16_t pc);
	uint8_t getAddressRam(uint16_t dir);
	void setAddress(int dir, uint8_t val);
	void setAddressPair(uint16_t dir, uint16_t val);
	void setAddressRam(int dir, uint8_t val);

	void setInterrupts(bool state);
	void setHalt(bool h);
	void setDisplay(bool d);
	void setStop(bool s);
};