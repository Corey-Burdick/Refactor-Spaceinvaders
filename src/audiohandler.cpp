#include <audiohandler.h>

AudioHandler::AudioHandler() {
  InitAudioDevice();

}

AudioHandler::~AudioHandler() {
 
  // Loops through all Music stream in the active music vector, and frees them from memory.
  
  for (auto& m : _activeMusic) {
    UnloadMusicStream(m.second);
  } 

  CloseAudioDevice();
}

void AudioHandler::update() {

  // Loops through all active music and updates the audio stream.

  for (auto m : _activeMusic) {
    if (!IsMusicStreamPlaying(m.second)) {
      PlayMusicStream(m.second); 
    } else {
      UpdateMusicStream(m.second);
    }
  }
}

void AudioHandler::addMusic(const char* filename, std::string musicID) {
  _activeMusic[musicID] = LoadMusicStream(filename);
}

void AudioHandler::removeMusic(std::string musicID) {
  UnloadMusicStream(_activeMusic[musicID]);
  _activeMusic.erase(musicID);
}



