#include <player.h>

Player::Player(Vector2 frame) {

  image = LoadTexture("Graphics/spaceship.png");
  position.x = (WINDOW_WIDTH / 2) - (image.width / 2) + offset.x;
  position.y = WINDOW_HEIGHT + offset.y - image.height;
  offset = frame;
  worldPosition.x = position.x + offset.x;
  worldPosition.y = position.y + offset.y;

}

Player::~Player() {
  UnloadTexture(image);
}

void Player::update() {
}

void Player::draw() {
  DrawTextureV(image, worldPosition, WHITE);
}
