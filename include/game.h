#pragma once

#include <raylib.h>
#include <constants.h>
#include <audiohandler.h>

class Game {
private:
  AudioHandler _audio;
  Rectangle _gameWindow;

  void _drawGameWindow();
  void _updateGameWindow();
public:

  Game();
  ~Game();
  void update();
  void draw();
};
