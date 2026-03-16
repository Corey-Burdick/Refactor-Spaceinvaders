#include <player.h>

Player::Player(Vector2 frame) {
  _offset = frame; 
  _image = LoadTexture("Graphics/spaceship.png");
  _worldPosition.x = (WINDOW_WIDTH - _image.width) / 2;
  _worldPosition.y = WINDOW_HEIGHT - _image.height;
  _resetTimeSinceLastFire();
}

Player::~Player() {
  UnloadTexture(_image);
}

void Player::update() {
  _updateTimeSinceLastFire();
  _handlePlayerMovement();
  _handleMovementConstraints();
}

void Player::draw() {
  DrawTextureV(_image, _getScreenPosition(), WHITE);
}

Vector2 Player::_getScreenPosition() {
  Vector2 ScreenPosition;
  ScreenPosition.x = _worldPosition.x + _offset.x;
  ScreenPosition.y = _worldPosition.y + _offset.y;
  return ScreenPosition;
}

void Player::_handlePlayerMovement() {
  if (IsKeyDown(KEY_A)) {
    _worldPosition.x -= 7;
  }
  if (IsKeyDown(KEY_D)) {
    _worldPosition.x += 7;
  }
}

void Player::_handleMovementConstraints() {
  if (_worldPosition.x <= 0) {
    _worldPosition.x = 0;
  }
  if (_worldPosition.x >= WINDOW_WIDTH - _image.width) {
    _worldPosition.x = WINDOW_WIDTH - _image.width;
  }
}

void Player::_updateTimeSinceLastFire() {
  _lastPlayerInput += GetFrameTime();
}

void Player::_resetTimeSinceLastFire() {
  _lastPlayerInput = 0.0f;
}

Vector2 Player::getPlayerPosition() {
  return _worldPosition;
}
