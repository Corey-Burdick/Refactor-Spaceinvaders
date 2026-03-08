#pragma once

#include <raylib.h>
#include <audiohandler.h>

class Game {
private:
  AudioHandler audio;
public:

  Game();
  ~Game();
  void update();
  void draw();
};
