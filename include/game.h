#pragma once

#include <raylib.h>
#include <constants.h>
#include <audiohandler.h>
#include <gamewindow.h>

class Game {
private:
  AudioHandler _audio;
  GameWindow _gameFrame;

public:

  Game();
  ~Game();
  void update();
  void draw();
};
