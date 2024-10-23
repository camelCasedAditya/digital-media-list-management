#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
using namespace std;

class Music : public DigitalMedia {
 public:
  //Music class constructor and destructor
  Music();
  ~Music();

  // functions to get and set the artist
  char* getArtist();
  void setArtist(char* newartist);
  
  // functions to get and set the music duration
  int getDuration();
  void setDuration(int newduration);
  
  // functions to get and set the publisher
  char* getPublisher();
  void setPublisher(char* newpublisher);

  // function that prints out all attributes of a music object
  void print();

 protected:
  // attributes specific to a music object
  char* artist;
  int duration;
  char* publisher;
};

#endif
