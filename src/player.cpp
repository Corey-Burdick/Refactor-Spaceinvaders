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
  _updateLasers();
}

void Player::draw() {
  DrawTextureV(_image, _getScreenPosition(), WHITE);
  _drawLasers();
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
  _handleMovementConstraints();
  if (IsKeyDown(KEY_SPACE)) {
    _fireLaser();
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

void Player::_fireLaser() {
  if (_lastPlayerInput >= _firerate) {
    _lasers.push_back(Laser(Vector2{_worldPosition.x + _image.width / 2 - 2, _worldPosition.y}, -6, _offset));
    _resetTimeSinceLastFire();
  } 
}

void Player::_updateLasers() {
  for (auto& l : _lasers) {
    l.update();
  }
  _clearInactiveLasers();
}

void Player::_drawLasers() {
  for (auto& l : _lasers) {
    l.draw();
  }
}

void Player::_clearInactiveLasers() {
  for (auto it = _lasers.begin(); it != _lasers.end();) {
    if (!it -> isActive) {
      it = _lasers.erase(it);
    } else {
      ++it;
    }
  }
}
