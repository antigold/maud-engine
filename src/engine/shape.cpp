#include "shape.h"

std::vector<Square> squares;

void Square::render(SDL_Renderer* renderer) {
    SDL_FRect shape = {
        originX, // why the fuck does it work when i subtract 1
        originY, // otherwise leaves gaps
        sizeX,
        sizeY
    };

    // printf("%f - %f\n", pos.getx(), pos.gety());
    SDL_SetRenderDrawColor(renderer, r, g, b, 0); //color
    SDL_RenderFillRectF(renderer, &shape); //draws on screen
}