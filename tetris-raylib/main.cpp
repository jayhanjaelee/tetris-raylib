#include "Game.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    Game game{screenWidth, screenHeight, "Tetris Raylib"};
    return 0;
}