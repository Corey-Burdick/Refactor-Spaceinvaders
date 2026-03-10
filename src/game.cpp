#include <game.h>

Game::Game() {
  _updateGameWindow();
  _audio.addMusic("Audio/Music/PlaceholderTrack1.ogg");

}

Game::~Game() {

}

void Game::update() {
  _updateGameWindow();
  _audio.update();

}

void Game::draw() {
  _drawGameWindow();
}

void Game::_drawGameWindow() {
  
  DrawRectangleRoundedLinesEx(_gameWindow, 0.2f, 2, 5, WHITE);
}

void Game::_updateGameWindow() {
  _gameWindow = {float(GetScreenWidth() / 2 - WINDOW_WIDTH / 2), float(GetScreenHeight() / 2 - WINDOW_HEIGHT / 2), WINDOW_WIDTH, WINDOW_HEIGHT}; 
}

Vector2 Game::getGameWindowOrigin() {
  Vector2 outputVector = Vector2{_gameWindow.x, _gameWindow.y};
  return outputVector;
}
