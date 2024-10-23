#ifndef DIGITALMEDIA_H
#define DIGITALMEDIA_H
#include <iostream>
#include <cstring>
using namespace std;

class DigitalMedia {
 public:
  // Constructor for digital media
  DigitalMedia();

  // virtual destructor which calls the needed child class destructor
  virtual ~DigitalMedia();
  // function to get title
  char* getTitle();
  // function to set the title
  void setTitle(char* newtitle);
  // function to get the year
  int getYear();
  //function to set the year
  void setYear(int newyear);
  // function to print the digital media. Calls the corresponding child print function
  virtual void print();
 protected:
  //Title and year attributes
  char* title;
  int year;
};

#endif
