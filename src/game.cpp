#include <game.h>

Game::Game() {
  audio.addMusic("Audio/Music/PlaceholderTrack1.ogg");
}

Game::~Game() {

}

void Game::update() {
  audio.update();

}

void Game::draw() {

}
