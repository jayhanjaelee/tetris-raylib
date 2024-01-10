#include "Game.h"
#include <raylib.h>
#include <assert.h>

Game::Game(int width, int height, std::string title)
{
    assert(!GetWindowHandle()); // If assertion triggers : Window is already opened.
    InitWindow(width, height, title.c_str());
}

Game::~Game() noexcept
{
    assert(GetWindowHandle()); // If assertion triggers : Window is already closed.
    CloseWindow();
}

bool Game::GameShouldClose() const
{
    return false;
}

void Game::Tick()
{
    BeginDrawing();
    Update();
    Draw();
    EndDrawing();
}

void Game::Draw()
{
    ClearBackground(RAYWHITE);
}

void Game::Update()
{
}
