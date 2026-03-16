#pragma once

#include <raylib.h>
#include <constants.h>

class Laser {
private:
  Vector2 _worldPosition;

public:

  Laser();
  ~Laser();
  void update();
  void draw();
};
