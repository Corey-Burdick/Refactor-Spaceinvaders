#pragma once

#include <map>
#include <raylib.h>
#include <string>

class AudioHandler {
private:
  std::map<std::string, Music> _activeMusic;

public:

  AudioHandler();
  ~AudioHandler();
  void update();
  void addMusic(const char* filename, std::string musicID);
  void removeMusic(std::string musicID);

};
