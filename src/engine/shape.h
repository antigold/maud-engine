#pragma once
#include <SDL2/SDL.h>
#include <vector>

class Shape {
public:

    float originX;
    float originY;
    float sizeX;
    float sizeY;
    int r;
    int g;
    int b;

    explicit Shape(float originX, float originY, float sizeX, float sizeY, int r, int g, int b) :
    originX(originX), originY(originY), sizeX(sizeX), sizeY(sizeY), r(r), g(g), b(b) {}
};

class Square : public Shape {
public:
    SDL_FRect shape;
    explicit Square(float originX, float originY, float sizeX, float sizeY, int r, int g, int b)
        : Shape(originX, originY, sizeX, sizeY, r, g, b), shape{originX, originY, sizeX, sizeY} {}

    void render(SDL_Renderer* renderer);
};


extern std::vector<Square> squares;

