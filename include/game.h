#pragma once

#include <raylib.h>
#include <vector>
#include <constants.h>
#include <audiohandler.h>
#include <gamewindow.h>
#include <player.h>
#include <laser.h>
#include <enemy.h>

class Game {
private:
  Font _gameFont;
  int _titleFontSize;
  AudioHandler _audio;
  GameWindow _gameFrame;
  Player _player{_gameFrame.getFrameOffset()};
  std::vector<Enemy> _enemies;

  void _drawTitle();
  void _createEnemies();
  void _drawEnemies();
  void _updateEnemies();
public:

  Game();
  ~Game();
  void update();
  void draw();
};
