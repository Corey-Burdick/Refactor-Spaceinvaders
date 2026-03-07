#include <raylib.h>
#include <constants.h>

int main() {
  
  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Space Invaders");
  SetTargetFPS(TARGET_FPS);
  
  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(COLOR_BACKGROUND_GREY);

    EndDrawing();
  }

}
