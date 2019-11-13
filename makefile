all:
	g++ -c Util.cpp -Wno-all -std=c++11
	g++ -c Boy.cpp -Wno-all -std=c++11 -I/usr/local/Cellar/sdl2/2.0.10/include -lsdl2
	g++ -c 8bitALU.cpp -Wno-all -std=c++11
	g++ -c 16bitALU.cpp -Wno-all -std=c++11
	g++ -c 8bitLSM.cpp -Wno-all -std=c++11
	g++ -c 16bitLSM.cpp -Wno-all -std=c++11
	g++ -c Cartridge.cpp -Wno-all -std=c++11
	g++ -c JumpCalls.cpp -Wno-all -std=c++11
	g++ -c Misc.cpp -Wno-all -std=c++11
	g++ -c OPCodes.cpp -Wno-all -std=c++11
	g++ -c RotateShift.cpp -Wno-all -std=c++11
	g++ -o gb thegb.cpp *.o -std=c++11 -I/usr/local/Cellar/sdl2/2.0.10/include -lsdl2
	rm *.o
	./gb tetris.gb