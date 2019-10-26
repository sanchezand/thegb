#include <iostream>
#include <SDL.h>
#include "Boy.h"
#undef main

int main(){


	SDL_Event event;
	while (true) {
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_MOUSEMOTION:
				//printf("LMAO");
				break;
			case SDL_KEYUP:
				//printf("%d", event.key.keysym.scancode);
				break;
			case SDL_WINDOWEVENT:
				switch (event.window.event) {
				case SDL_WINDOWEVENT_CLOSE:
					return 1;
				}
				break;
			}

		}
	}
	return 1;
}