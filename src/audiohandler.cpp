#include <audiohandler.h>

AudioHandler::AudioHandler() {
  InitAudioDevice();

}

AudioHandler::~AudioHandler() {
  CloseAudioDevice();
}

void AudioHandler::update() {

  // Loops through all active music and updates the audio stream.

  for (auto m : _activeMusic) {
    if (!IsMusicStreamPlaying(m)) {
      PlayMusicStream(m); 
    } else {
      UpdateMusicStream(m);
    }
  }
}

void AudioHandler::addMusic(const char* filename) {
  _activeMusic.push_back(LoadMusicStream(filename));
}
