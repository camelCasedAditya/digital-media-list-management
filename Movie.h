#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
using namespace std;

class Movie : public DigitalMedia {
 public:
  // Constructor and destructor for movie objects
  Movie();
  ~Movie();

  // Functons to get and set director
  char* getDirector();
  void setDirector(char* newdirector);
  // functions to get and set the duration
  int getDuration();
  void setDuration(int newduration);
  // functions to get and set the rating
  float getRating();
  void setRating(float newrating);
  // functions to print out all attributes of a movie object
  void print();

 protected:
  // attributes specific to a movie object
  char* director;
  int duration;
  float rating;
};

#endif
