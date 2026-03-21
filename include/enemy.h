#pragma once

#include <raylib.h>
#include <cstddef>
#include <constants.h>

class Enemy {
private:
  int _type;
  Vector2 _worldPosition;
  Vector2 _offset;
  bool _moveLeft = true;
  
  void _move();
public:
  static Texture2D enemyImages[3];

  Enemy(int _type, Vector2 worldPosition, Vector2 frame);
  static void unloadImages();
  void update();
  void draw();
  void reverseDirection();
  int getType();
  Vector2 getScreenPosition();
  bool isCollidingWithFrame();
};
