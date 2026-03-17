#include <game.h>

Game::Game() {
  _audio.addMusic("Audio/Music/PlaceholderTrack1.ogg", "mainTheme");
  _gameFont = LoadFont("Fonts/ProtoNerd.ttf");
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
  _gameFrame.draw();
  _drawTitle();
}

void Game::_drawTitle() {
  const char* title = "BEPIS INVADERS";
  int fontSize = 80;
  float spacing = fontSize / 15;
  Vector2 titleSize = MeasureTextEx(_gameFont, title, fontSize, spacing);
  float posX = GetScreenWidth() / 2 - titleSize.x / 2;
  float posY = _gameFrame.getFrameOffset().y / 2 - titleSize.y / 2;
  DrawTextEx(_gameFont, title, {posX, posY}, fontSize, spacing, WHITE);
}

