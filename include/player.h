#pragma once

#include <raylib.h>
#include <constants.h>
#include <laser.h>
#include <vector>
#include <iostream>

class Player {
private:
  Texture2D _image;
  Vector2 _offset;
  Vector2 _worldPosition;
  float _lastPlayerInput;
  std::vector<Laser> _lasers;
  const float _firerate = 0.35f;

  Vector2 _getScreenPosition();
  void _handlePlayerMovement();
  void _handleMovementConstraints();
  void _updateTimeSinceLastFire();
  void _resetTimeSinceLastFire();
  void _fireLaser();
  void _updateLasers();
  void _drawLasers();

public:
  Player(Vector2 frame);
  ~Player();
  void update();
  void draw();
  
};
