#include <enemy.h>

Enemy::Enemy(int type, Vector2 _worldPosition, Vector2 frame) {
  this -> _type = _type;
  this -> _worldPosition = _worldPosition;
  _offset = frame;

  switch(type) {
    case 1:
      image = LoadTexture("Graphics/Green_Can.png");
      break;
    case 2:
      image = LoadTexture("Graphics/Red_Can.png");
      break;
    case 3:
      image = LoadTexture("Graphics/Pawn_Can.png");
      break;
    default:
      image = LoadTexture("Graphics/Pawn_Can.png");
  }
}

void Enemy::draw() {
  DrawTextureV(image, getScreenPosition(), WHITE);
}

int Enemy::getType() {
  return _type;
}

Vector2 Enemy::getScreenPosition() {
  Vector2 ScreenPosition;
  ScreenPosition.x = _worldPosition.x + _offset.x;
  ScreenPosition.y = _worldPosition.y + _offset.y;
  return ScreenPosition;
}
