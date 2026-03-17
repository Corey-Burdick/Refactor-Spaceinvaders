#pragma once

#include <raylib.h>
#include <constants.h>

class Laser {
private:
  const Vector2 _size = Vector2{4, 15};
  Vector2 _worldPosition;
  Vector2 _offset;
  int _speed;

  Vector2 _getScreenPosition();

public:
  bool isActive;

  Laser(Vector2 position, int speed, Vector2 frame);
  void update();
  void draw(); 
};
