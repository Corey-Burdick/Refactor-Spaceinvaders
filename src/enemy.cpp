#include <enemy.h>

Texture2D Enemy::enemyImage[3] = {};

Enemy::Enemy(int type, Vector2 position) {
  this -> type = type;
  _worldPosition = position;
}
