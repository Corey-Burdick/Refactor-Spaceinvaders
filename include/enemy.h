#pragma once

#include <raylib.h>

class Enemy {
private:
  Vector2 _worldPosition;  

  void _getScreenPosition();

public:
  static Texture2D enemyImage[3];
  int type;
  Vector2 position;

  Enemy(int type, Vector2 position);
  static void UnloadImages();
  void update();
  void draw();
  int GetType();

};
