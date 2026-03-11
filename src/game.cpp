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
  _gameFrame.draw();
  _player.draw();
}

  

