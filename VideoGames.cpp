#include <iostream>
#include <cstring>
#include "VideoGames.h"
#include <iomanip>
using namespace std;

VideoGames::VideoGames() {
  //initalizing each attribute
  title = new char[50];
  year = 0;
  publisher = new char[50];
  rating = 0.0;
}

// creating destructor
VideoGames::~VideoGames() {
  delete publisher;
}

// function that returns the publisher
char* VideoGames::getPublisher() {
  return publisher;
}

// function to set the publisher
void VideoGames::setPublisher(char* newpublisher) {
  strcpy(publisher, newpublisher);
}

//function that returns the rating
float VideoGames::getRating() {
  return rating;
}

//function to set the rating
void VideoGames::setRating(float newrating) {
  rating = newrating;
}

// function to print out all attributes of a video game
void VideoGames::print() {
  cout << title << ", in " << year << ", by " << publisher << ", rated " << std::setprecision(3) << rating << endl;
}
