#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
using namespace std;

// Digital Media parent constructor
DigitalMedia::DigitalMedia() {
  title = new char[50];
  year = 0;
}

//Destructor
DigitalMedia::~DigitalMedia() {
  delete title;
}

// Function to get the title
char* DigitalMedia::getTitle() {
  return title;
}
// function to set the title
void DigitalMedia::setTitle(char* newtitle) {
  strcpy(title, newtitle);
}
// function to get year
int DigitalMedia::getYear() {
  return year;
}
// function to set the year
void DigitalMedia::setYear(int newyear) {
  year = newyear;
}

void DigitalMedia::print() {
  cout << title << " " << year << endl;
}
