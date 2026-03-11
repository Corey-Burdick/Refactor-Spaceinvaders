#include <player.h>

Player::Player(Vector2 frame) {

  _image = LoadTexture("Graphics/spaceship.png");
  _worldPosition.x = (WINDOW_WIDTH / 2) - (_image.width / 2) + _offset.x;
  _worldPosition.y = WINDOW_HEIGHT + _offset.y - _image.height;
  _offset = frame;

}

Player::~Player() {
  UnloadTexture(_image);
}

void Player::update() {
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
