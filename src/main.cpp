#include <raylib.h>
#include <constants.h>
#include <game.h>

int main() {
  
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  SetConfigFlags(FLAG_MSAA_4X_HINT);

  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Space Invaders");
  
  SetTargetFPS(TARGET_FPS);
  SetWindowMinSize(1280, 720);
  SetWindowSize(GetMonitorWidth(0), GetMonitorHeight(0));
  //ToggleFullscreen();

  Game game;
  
  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(COLOR_BACKGROUND_GREY);

    game.update();

    game.draw();

    EndDrawing();
  }

}
