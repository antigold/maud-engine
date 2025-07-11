// MAUD ENGINE WINDOW CODE
//
// this code will contain window management stuff like
// "create_window()", "get_window_dimensions()"?, "close_window()"

#include "window.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>

float windowWidth, windowHeight;
int int_ww, int_wh;

SDL_Renderer* renderer = nullptr;
SDL_Window* window = nullptr;

// initializes SDL engine, basically just makes a window, and gives it a size, and a renderer (gpu accelerated)
void init_sdl() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return;
    }

    window = SDL_CreateWindow("maud engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
    }

    SDL_SetWindowResizable(window, SDL_TRUE);
}

void get_window_resolution(){
    SDL_GetWindowSize(window, &int_ww, &int_wh);
    windowWidth = static_cast<float>(int_ww);
    windowHeight = static_cast<float>(int_wh);
}

//exits sdl, maybe i can add autosave here?
void exit_sdl() {
    if (renderer) {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
    SDL_Quit();
}