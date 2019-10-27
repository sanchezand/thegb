#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

enum Cartridge_Type {
	ROM_ONLY, ROM_RAM,
	MBC1, MBC1_RAM,
	MBC2,
	MBC3_TIMER,
	MBC3_TIMER_RAM,
	MBC3,
	MBC3_RAM,
	MBC5,
	MBC5_RAM,
	MBC5_RUMBLE_RAM,
	MBC5_RUMBLE,
	MBC6,
	MBC7,
	MMM1, MMM1_RAM,
	CAMERA,
	TAMA5
};

class Cartridge {
private:
	const char* path;
	vector<char> bytes;
	int cartSize;
	bool loaded;
	Cartridge_Type type;
public:
	Cartridge(const char* path);

	bool read();
	unsigned char getAddress(int dir);
	unsigned char getRAMAddress(int dir);

	// Stole it from stackoverflow (shameful)
	void dumpCart();
	const char* getTitle();
	char cbgFlag();
	//char licenseeCode();
	char sgbFlag();
	Cartridge_Type getType();
	char romSize();
	char ramSize();
	char regionCode();
	
	bool checkHeaderChecksum();
	bool checkGlobalChecksum();
};