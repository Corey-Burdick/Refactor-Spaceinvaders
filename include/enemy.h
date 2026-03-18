#pragma once

#include <raylib.h>

class Enemy {
private:
  int _type;
  Vector2 _worldPosition;
  Vector2 _offset;

public:
  Texture2D image;

  Enemy(int _type, Vector2 worldPosition, Vector2 frame);
  void update();
  void draw();
  int getType();
  Vector2 getScreenPosition();
};
