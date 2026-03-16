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
  float _lastPlayerInput;
  const float _firerate = 0.35f;

  Vector2 _getScreenPosition();
  void _handlePlayerMovement();
  void _handleMovementConstraints();
  void _updateTimeSinceLastFire();
  void _resetTimeSinceLastFire();

public:
  Player(Vector2 frame);
  ~Player();
  void update();
  void draw();
  Vector2 getPlayerPosition();
  
};
