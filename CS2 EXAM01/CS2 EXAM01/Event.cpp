// Author: Nate Williams
// Purpose: CS2 Exam01
// I affirm that all code given below was written solely by me, Nate Williams, and that any help I received adhered 
// to the rules stated for this exam. 

using namespace std;
#include<ctime>
#include<string>
#include<cstdlib>
#include<iostream>
#include "Event.h"
#include "Venue.h"



Event::Event(int newTime, string newTitle) {
	Time = newTime; // Sets the time of the event to the input time
	Title = newTitle; // Sets the title of the event to the input title
}

// Default constructor, represents free time
Event::Event() {
	Time = -1;
	Title = "free";
}

int Event::getTime() { // Returns the time of the event
	return Time;
}

string Event::getTitle() { // Returns the title of the event
	return Title;
}

void Event::setTime(int newTime) { // Sets the time
	Time = newTime;
}

void Event::setTitle(string newTitle) { // Sets the title
	Title = newTitle;
}