// MAUD ENGINE RENDERER CODE
//
// this file will contain functions to draw sprites, etc
// "draw_sprite()","draw_text()", "draw_tile()" etc...
// probably will add a map renderer first

#include "renderer.h"
#include "window.h"
#include "shape.h"

void render_show(){
    SDL_RenderPresent(renderer); // shows render
    // for (auto& square : squares) { // renders map tiles, temporary
    //     square.render(renderer);
    // }
}

void render_clear(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // sets color to black
    SDL_RenderClear(renderer); // clears screen, will probably remove soon
}
