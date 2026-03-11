#include <player.h>

Player::Player(Vector2 frame) {

  image = LoadTexture("Graphics/spaceship.png");
  position = {250, 250};
  offset = frame;
  worldPosition.x = position.x + offset.x;
  worldPosition.y = position.y + offset.y;

}

Player::~Player() {
  UnloadTexture(image);
}

void Player::update() {
  worldPosition.x = position.x + offset.x;
  worldPosition.y = position.y + offset.y;
}

void Player::draw() {
  DrawTextureV(image, worldPosition, WHITE);
}
