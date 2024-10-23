#include <iostream>
#include <cstring>
#include "Movie.h"
#include <iomanip>
using namespace std;

// Consructor to create a movie object
Movie::Movie() {
  title = new char[50];
  director = new char[50];
  year = 0;
  duration = 0;
  rating = 0.0;
}
// Destructor for movie objects
Movie::~Movie() {
  delete director;
}

// function that returns the movies director
char* Movie::getDirector() {
  return director;
}
// function that sets the movie director
void Movie::setDirector(char* newdirector) {
  strcpy(director, newdirector);
}
// function that returns the movie duration
int Movie::getDuration() {
  return duration;
}
// function that sets the movie duration
void Movie::setDuration(int newduration) {
  duration = newduration;
}
// function that returns the movie rating
float Movie::getRating() {
  return rating;
}

// function to set the movie rating
void Movie::setRating(float newrating) {
  rating = newrating;
}

// function that prints out all attributes of a movie object
void Movie::print() {
  cout << title << ", " << year << ", directed by " << director << ", " << duration << " minutes, " << std::setprecision(3) << rating << endl;
}

