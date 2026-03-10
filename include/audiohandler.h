#pragma once

#include <map>
#include <raylib.h>
#include <string>

class AudioHandler {
private:
  std::map<std::string, Music> _activeMusic;
  std::map<std::string, Sound> _activeSounds;

public:

  AudioHandler();
  ~AudioHandler();
  void update();
  void addMusic(const char* filename, std::string musicID);
  void removeMusic(std::string musicID);
  void clearMusic();
};
