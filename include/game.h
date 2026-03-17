#pragma once

#include <raylib.h>
#include <constants.h>
#include <audiohandler.h>
#include <gamewindow.h>
#include <player.h>
#include <laser.h>

class Game {
private:
  Font _gameFont;
  int _titleFontSize;
  AudioHandler _audio;
  GameWindow _gameFrame;
  Player _player{_gameFrame.getFrameOffset()};

public:

  Game();
  ~Game();
  void update();
  void draw();
  void _drawTitle();
};
