#include <iostream>
#include <cstring>
#include "Music.h"
#include <iomanip>
using namespace std;

Music::Music() {
  title = new char[50];
  artist = new char[50];
  year = 0;
  duration = 0;
  publisher = new char[50];
}
Music::~Music() { 
  delete artist;
  delete publisher;
}

char* Music::getArtist() {
  return artist;
}
void Music::setArtist(char* newartist) {
  strcpy(artist, newartist);
}

int Music::getDuration() {
  return duration;
}
void Music::setDuration(int newduration) {
  duration = newduration;
}

char* Music::getPublisher() {
  return publisher;
}
void Music::setPublisher(char* newpublisher) {
  strcpy(publisher, newpublisher);
}

void Music::print() {
  cout << title << ", " << year << ", created by " << artist << ", published by " << publisher << ", " << duration << " minutes, " <<endl;
}
  
