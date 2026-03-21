#include <enemy.h>

Texture2D Enemy::enemyImages[3] = {};

Enemy::Enemy(int _type, Vector2 _worldPosition, Vector2 frame) {
  this -> _type = _type;
  this -> _worldPosition = _worldPosition;
  _offset = frame;

  if (enemyImages[_type - 1].id == 0) {

  switch(_type) {
    case 1:
      enemyImages[0] = LoadTexture("Graphics/Green_Can.png");
      break;
    case 2:
      enemyImages[1] = LoadTexture("Graphics/Red_Can.png");
      break;
    case 3:
      enemyImages[2] = LoadTexture("Graphics/Pawn_Can.png");
      break;
    default:
      enemyImages[0] = LoadTexture("Graphics/Pawn_Can.png");
  }
  }
}

void Enemy::update() {
  move();
}

void Enemy::draw() {
  DrawTextureV(enemyImages[_type - 1], getScreenPosition(), WHITE);
}

void Enemy::reverseDirection() {
  if (_moveLeft) {
    _moveLeft = false;
  } else {
    _moveLeft = true;
  }

  _worldPosition.y += 5;
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

bool Enemy::isCollidingWithFrame() {
  if (_worldPosition.x + enemyImages[_type - 1].width >= WINDOW_WIDTH ||  _worldPosition.x <= 0) {
    return true;
  }

  return false;
}

void Enemy::unloadImages() {
  for (int i = 0; i < 4; i++) {
    UnloadTexture(enemyImages[i]);
  }
}

void Enemy::move() {
  if (_moveLeft) {
    _worldPosition.x += 1;
  } else {
    _worldPosition.x -= 1;
  }
}



