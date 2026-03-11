#pragma once

#include <raylib.h>
#include <constants.h>
#include <vector>

class Player {
private:
  Texture2D image;
  Vector2 position;
  Vector2 offset;
  Vector2 worldPosition;

public:
  Player(Vector2 frame);
  ~Player();
  void update();
  void draw();
  
};
