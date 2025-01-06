#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main () 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    TBlock block = TBlock();
    block.Move(4, 3);

    while(!WindowShouldClose())
    {   
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }

    CloseWindow();

}