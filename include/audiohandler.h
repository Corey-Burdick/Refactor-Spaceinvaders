#pragma once

#include <vector>

class AudioHandler{
private:
  std::vector<Music> _activeMusic;

public:

  AudioHandler();
  ~AudioHandler():
  void update();

};
