#include <game.h>

Game::Game() {
  _audio.addMusic("Audio/Music/PlaceholderTrack1.ogg");
  

}

Game::~Game() {

}

void Game::update() {
  _audio.update();
  _gameFrame.update();

}

void Game::draw() {
  _gameFrame.draw();
}

  

