#include <laser.h>

Laser::Laser(Vector2 position, int speed, Vector2 frame) {
  _offset = frame;
  isActive = true;
  _worldPosition.y = position.y;
  _worldPosition.x = position.x;
  _speed = speed; 
}

void Laser::update() {
  _worldPosition.y += _speed;
  if (_worldPosition.y >= WINDOW_HEIGHT || _worldPosition.y <= 0) {
    isActive = false;
  }
}

void Laser::draw() {
  if (isActive) {
    DrawRectangleV(_getScreenPosition(), _size, COLOR_FOREGROUND_YELLOW);
  }
}

Vector2 Laser::_getScreenPosition() {
  Vector2 ScreenPosition;
  ScreenPosition.x = _worldPosition.x + _offset.x;
  ScreenPosition.y = _worldPosition.y + _offset.y;
  return ScreenPosition;
}

