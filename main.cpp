/*
 Aditya Chandrashekaran
 10/15/2024
 Allows users to add, search, and delete items from a list of different types of digital media
*/

// Importing needed libraries
#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
#include "VideoGames.h"
#include "Music.h"
#include "Movie.h"
#include <vector>
#include <iomanip>

using namespace std;

// Function declarations
void addMusic(vector<DigitalMedia*> &list);
void addMovie(vector<DigitalMedia*> &list);
void addVideoGame(vector<DigitalMedia*> &list);
void search(vector<DigitalMedia*> list);
void deleteItems(vector<DigitalMedia*> &list);

int main() {

  // creating digital media vector and variable to keep track of if the program needs to run
  vector<DigitalMedia*> mediaList;
  bool running = true;

  // program running loop
  while(running == true) {

    // user input to get what command they want to do
    char input[50];
    cout << "What would you like to do: \'SEARCH\', \'ADD\', \'DELETE\', \'QUIT\'" << endl;
    cin >> input;
    cin.ignore();

    if (strcmp(input, "SEARCH") == 0) {
      // calls search function
      search(mediaList);
    }
    else if (strcmp(input, "ADD") == 0) {
      // Asks for the type of digital media the user wants to add
      cout << "What would you like to add: \'VIDEOGAME\', \'MUSIC\', or \'MOVIE\'" << endl;
      cin >> input;
      cin.ignore();
      // calls corresponding add function
      if (strcmp(input, "VIDEOGAME") == 0) {
	addVideoGame(mediaList);
      }
      else if (strcmp(input, "MUSIC") == 0) {
	addMusic(mediaList);
      }
      else if (strcmp(input, "MOVIE") == 0) {
	addMovie(mediaList);
      }
      else {
	cout << "An invalid media type was entered" << endl;
      }
    }
    // calls delete function
    else if (strcmp(input, "DELETE") == 0) {
      deleteItems(mediaList);
    }
    // quits the program
    else if (strcmp(input, "QUIT") == 0) {
      running = false;
    }
  }
  return 0;
}

// Add function for a movie
void addMovie(vector<DigitalMedia*> &list) {
  // Creates variables to store inputs
  char charInput[50];
  int intInput = 0;
  float floatInput = 0.0;
  Movie* movie = new Movie();

  // Asks and stores each attribute of a movie
  cout << "Enter a title" << endl;
  cin.getline(charInput, 50);
  movie->setTitle(charInput);
  cout << "Enter a director" << endl;
  cin.getline(charInput, 50);
  movie->setDirector(charInput);
  cout << "Enter the year the movie was released" << endl;
  cin >> intInput;
  cin.ignore();
  movie->setYear(intInput);
  cout << "Enter the movie duration" << endl;
  cin >> intInput;
  cin.ignore();
  movie->setDuration(intInput);
  cout << "Enter the movies rating" << endl;
  cin >> floatInput;
  cin.ignore();
  movie->setRating(floatInput);

  // adds the movie to the digital media list
  list.push_back(movie);
}

// function to add music
void addMusic(vector<DigitalMedia*> &list) {
  // created varibles to store inputs
  Music* music = new Music();
  char charInput[50];
  int intInput = 0;

  // gets each attribute of music from user input
  cout << "Enter the music title" << endl;
  cin.getline(charInput, 50);
  music->setTitle(charInput);
  cout << "Enter the artists name" << endl;
  cin.getline(charInput, 50);
  music->setArtist(charInput);
  cout << "Enter the year the song was released" << endl;
  cin >> intInput;
  cin.ignore();
  music->setYear(intInput);
  cout << "Enter the song duration" << endl;
  cin >> intInput;
  cin.ignore();
  music->setDuration(intInput);
  cout << "Enter the publisher" << endl;
  cin.getline(charInput, 50);
  music->setPublisher(charInput);

  // adds the music object to digital media
  list.push_back(music);
}

// function to add a video game
void addVideoGame(vector<DigitalMedia*> &list) {
  // create variables to store inputs
  VideoGames* videogame = new VideoGames();
  char charInput[50];
  int intInput = 0;
  float floatInput = 0.0;
  // get each attribute of a video game object from the user and store it
  cout << "Enter the game title" << endl;
  cin.getline(charInput, 50);
  videogame->setTitle(charInput);

  cout << "Enter the year the game was released" << endl;
  cin >> intInput;
  cin.ignore();
  videogame->setYear(intInput);

  cout << "Enter the publisher" << endl;
  cin.getline(charInput, 50);
  videogame->setPublisher(charInput);

  cout << "Enter the video game rating" << endl;
  cin >> floatInput;
  cin.ignore();
  videogame->setRating(floatInput);

  // add the video game to digital media
  list.push_back(videogame);
}

// function to search for items
void search(vector<DigitalMedia*> list) {
  char input[50];

  // asks for what the user wants to search the objects by
  cout << "Search by \"TITLE\" or \"YEAR\"" << endl;
  cin >> input;
  // searches for any objects with a title that matches the user input and then prints it out
  if (strcmp(input, "TITLE") == 0) {
    cout << "Enter the title you want to search for" << endl;
    char titleInput[50];
    cin >> titleInput;
    for(int i = 0; i < list.size(); i++) {
      if (strcmp(list[i]->getTitle(), titleInput) == 0) {
	list[i]->print();
      }
    }
  }
  // searches for any objects with a year that matches the user input and then prints it out
  else if (strcmp(input, "YEAR") == 0) {
    cout << "Enter the year you want to search for" << endl;
    int yearInput = 0;
    cin >> yearInput;
    for(int i = 0; i < list.size(); i++) {
      if (list[i]->getYear() == yearInput) {
        list[i]->print();
      }
    }
  }
  else {
    cout << "INVALID INPUT" << endl;
  }
}

// Function to delete items
void deleteItems(vector<DigitalMedia*> &list) {
  char input[50];
  int yearInput = 0;
  char titleInput[50];

  // Asks what the user wants to search the items by
  cout << "Search by \"TITLE\" or \"YEAR\"" << endl;
  cin >> input;
  vector<int> indexs;
  indexs.clear();
  // if the user wants to search by the title it prints out all items with that title
  if (strcmp(input, "TITLE") == 0) {
    cout << "Enter the title you want to search for" << endl;
    cin >> titleInput;
    for(int i = 0; i < list.size(); i++) {
      if (strcmp(list[i]->getTitle(), titleInput) == 0) {
        list[i]->print();
	indexs.push_back(i);
      }
    }
    cout << "Are you sure you want to delete these items \'YES\' or \'NO\'" << endl;
    cin >> input;
    // if the user confirms that they want to delete the items then all items with that title are deleted
    if (strcmp(input, "YES") == 0) {
      vector<DigitalMedia*>::iterator it;
      for (it = list.begin(); it != list.end(); ++it) {
	if (strcmp((*it)->getTitle(), titleInput) == 0) {
	  delete *it;
	  list.erase(it);
	  cout << "Deleted Item" << endl;
	  return;
	}
      }
    }
  }
  // if the user wants to search by the year it prints out all items with that year
  else if (strcmp(input, "YEAR") == 0) {
    cout << "Enter the year you want to search for" << endl;
    cin >> yearInput;
    for(int i = 0; i < list.size(); i++) {
      if (list[i]->getYear() == yearInput) {
        list[i]->print();
	indexs.push_back(i);
      }
    }
    // if the user confirms that they want to delete the items then all items with that year are deleted
    cout << "Are you sure you want to delete these items \'YES\' or \'NO\'" << endl;
    cin >> input;
    if (strcmp(input, "YES") == 0) {
      vector<DigitalMedia*>::iterator it;
      for (it = list.begin(); it != list.end(); ++it) {
	if ((*it)->getYear() == yearInput) {
	  cout << "Deleted Item" << endl;
	  delete *it;
	  list.erase(it);
	  return;
	}
      }
    }
  }
  // else we let the user know that they  put in an invalid input
  else {
    cout << "INVALID INPUT" << endl;
  }
}
