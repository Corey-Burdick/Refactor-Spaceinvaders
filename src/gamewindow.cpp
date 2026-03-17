#include <gamewindow.h>

GameWindow::GameWindow() {
  _updateWindowFrame(); 
}

GameWindow::~GameWindow() {
}

void GameWindow::update() {
  _updateWindowFrame();
}

void GameWindow::draw() {
  _drawWindowFrame();
}

void GameWindow::_drawWindowFrame() {
  DrawRectangleLinesEx(_gameWindowFrame, 3, WHITE);
}

void GameWindow::_updateWindowFrame() {
  float posX = GetScreenWidth() / 2 - WINDOW_WIDTH / 2;
  float posY = GetScreenHeight() / 2 - WINDOW_HEIGHT / 2;
  _gameWindowFrame =  {posX, posY, WINDOW_WIDTH, WINDOW_HEIGHT};  
}

Vector2 GameWindow::getFrameOffset() {
  Vector2 frameOffset;
  frameOffset.x = _gameWindowFrame.x;
  frameOffset.y = _gameWindowFrame.y;
  return frameOffset;
}
