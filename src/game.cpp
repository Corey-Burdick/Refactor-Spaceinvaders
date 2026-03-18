#include <game.h>

Game::Game() {
  _audio.addMusic("Audio/Music/PlaceholderTrack1.ogg", "mainTheme");
  _titleFontSize = 80;
  _gameFont = LoadFontEx("Fonts/ProtoNerd.ttf", _titleFontSize, NULL, 0);
  _createEnemies();
}

Game::~Game() {

}

void Game::update() {
  _audio.update();
  _gameFrame.update();
  _player.update();
}

void Game::draw() {
  _player.draw();
  _drawEnemies();
  _gameFrame.draw();
  _drawTitle();
}

void Game::_drawTitle() {
  const char* title = "BEPIS INVADERS";
  float spacing = _titleFontSize / 15;
  Vector2 titleSize = MeasureTextEx(_gameFont, title, _titleFontSize, spacing);
  float posX = GetScreenWidth() / 2 - titleSize.x / 2;
  float posY = _gameFrame.getFrameOffset().y / 2 - titleSize.y / 2;
  DrawTextEx(_gameFont, title, {posX, posY}, _titleFontSize, spacing, WHITE);
}

void Game::_createEnemies() {
  std::vector<Enemy> tempEnemies;
  int cellSize = 55;
  for (int row = 0; row < 5; row++) {
    for (int col = 0; col < 11; col++) {
      float x = col * cellSize;
      float y = row * cellSize;
      tempEnemies.push_back(Enemy{1, {x, y}, _gameFrame.getFrameOffset()});
    }
  }
  _enemies = tempEnemies;
}

void Game::_drawEnemies() {
  for (auto& e : _enemies) {
    e.draw();
  }
}

