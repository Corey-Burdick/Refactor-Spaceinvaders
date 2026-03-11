#pragma once

#include <raylib.h>
#include <constants.h>
#include <vector>
#include <iostream>

class Player {
private:
  Texture2D _image;
  Vector2 _offset;
  Vector2 _worldPosition;

  Vector2 _getScreenPosition();
  void _handlePlayerMovement();
  void _handleMovementConstraints();

public:
  Player(Vector2 frame);
  ~Player();
  void update();
  void draw();
  
};
