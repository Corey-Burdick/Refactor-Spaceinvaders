#pragma once

#include <raylib.h>
#include <vector>
#include <constants.h>

class GameWindow{
private:
  Rectangle _gameWindowFrame;

  void _drawWindowFrame();
  void _updateWindowFrame();

public:

  GameWindow();
  ~GameWindow();
  void update();
  void draw();
};
