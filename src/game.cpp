#include <game.h>

Game::Game() {
  _audio.addMusic("Audio/Music/PlaceholderTrack1.ogg", "mainTheme");

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
  const char* title = "Space Invaders";
  int fontSize = 80;
  float posX = GetScreenWidth() / 2 - MeasureText(title, fontSize) / 2;
  float posY = _gameFrame.getFrameOffset().y / 2 - fontSize / 2;
  DrawText(title, posX, posY, fontSize, WHITE);
}

