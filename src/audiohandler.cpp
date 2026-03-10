#include <audiohandler.h>

AudioHandler::AudioHandler() {
  InitAudioDevice();

}

AudioHandler::~AudioHandler() {
 
  // Loops through all Music stream in the active music vector, and frees them from memory.
  
  for (auto& m : _activeMusic) {
    UnloadMusicStream(m);
  } 

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
