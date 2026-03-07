#include <raylib.h>
#include <constants.h>
#include <game.h>

int main() {
  
  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Space Invaders");
  SetTargetFPS(TARGET_FPS);

  Game game;
  
  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(COLOR_BACKGROUND_GREY);

    game.update();

    game.draw();

    EndDrawing();
  }

}
