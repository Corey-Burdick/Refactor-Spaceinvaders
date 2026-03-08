#pragma once

#include <vector>
#include <raylib.h>

class AudioHandler {
private:
  std::vector<Music> _activeMusic;

public:

  AudioHandler();
  ~AudioHandler();
  void update();
  void addMusic(const char* filename);

};
