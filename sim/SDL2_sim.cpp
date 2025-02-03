#include <SDL2/SDL.h>
#include <cstdint>
#include <fstream>
#include <verilated.h>
#include "../obj_dir/Vverilator_top.h"
#include "../obj_dir/Vverilator_top___024root.h"
#include <iostream>


SDL_Renderer *renderer;
Vverilator_top *top;

void step()
{
 	top->clk = 0;
 	top->clk_video=0;
 	top->eval();
     //top->clk = 1;
     //top->clk_video=0;
     //top->eval();
     //top->clk = 0;
     //top->clk_video=0;
     //top->eval();
 	top->clk = 1;
 	top->clk_video=1;
 	top->eval();
     //top->clk = 0;
     //top->clk_video=1;
     //top->eval();
}

void reset() {
	top->reset = 1;
	top->clk = 0;
	top->clk_video = 0;
 	top->eval();
	top->reset = 0;
	top->clk = 1;
	top->clk_video = 1;
 	top->eval();
}

int handleInput()
{
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
	 	switch (event.type) {
	 	case SDL_QUIT:
	 		return -1;
	 	case SDL_KEYDOWN:
			 if (event.key.keysym.sym == SDLK_ESCAPE)
				 return -2;
			 if (event.key.keysym.sym == SDLK_LEFT)
				top->hack_scancode = 130;
			 else if (event.key.keysym.sym == SDLK_RIGHT)
				top->hack_scancode = 132;
			 else
				top->hack_scancode = event.key.keysym.sym;
	 		break;
	 	case SDL_KEYUP:
			top->hack_scancode = 0;
	 		break;
	 	}
	 }
	return 0;
}

 void initVideo()
 {
 	SDL_Init(SDL_INIT_VIDEO);
 	SDL_Window *window = SDL_CreateWindow("N2T Computer - SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 512, 256, 0);
 	renderer = SDL_CreateRenderer(window, -1, 0);
 }

 void drawScreen()
 {
    uint16_t *smem = top->rootp->verilator_top__DOT__mem__DOT__screen1__DOT__vram.m_storage;
	for (int y = 0; y < 256; y++) {
		uint16_t* row = &smem[y << 5];
		int x = 0;
		for (int i = 0; i < 32; i++) {
			int xib = 1;
			for (int xi = 0; xi < 16; xi++) {
				if (row[x >> 4] & xib)
					SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				else
					SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
				SDL_RenderDrawPoint(renderer, x, y);
				x++;
				xib = xib << 1;
			}
		}
	}
 }

 void draw()
 {
 	SDL_SetRenderDrawColor(renderer, 100, 100, 100, 255);
 	SDL_RenderClear(renderer);
 	drawScreen();
 	SDL_RenderPresent(renderer);
 }

int main( int argc, char* args[] )
{
	top = new Vverilator_top;
	reset();
    initVideo();

    do {
        for (int c = 0; c < 500000; c++)
        {
            step();
        }
        draw();
    } while (handleInput() >= 0);
    return 0;
}

