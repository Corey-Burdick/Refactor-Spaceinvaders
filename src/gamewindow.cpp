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
  DrawRectangleRoundedLinesEx(_gameWindowFrame, 0.2f, 2, 5, WHITE);

}

void GameWindow::_updateWindowFrame() {
  _gameWindowFrame =  {float(GetScreenWidth() / 2 - WINDOW_WIDTH / 2), float(GetScreenHeight() / 2 - WINDOW_HEIGHT / 2), WINDOW_WIDTH, WINDOW_HEIGHT};  
}
