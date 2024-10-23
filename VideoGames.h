#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
using namespace std;

class VideoGames: public DigitalMedia {
 public:
  // Constructor and destructor for video games class
  VideoGames();
  ~VideoGames();
  // functions to set and get publisher attribute
  void setPublisher(char* newpublisher);
  char* getPublisher();

  // functions to set and get rating attribute
  void setRating(float newrating);
  float getRating();

  // print function to print out all attributes
  void print();
 protected:
  // Attributes specific to video game class
  char* publisher;
  float rating;
};

#endif
