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



bool Venue::validTime(int test) {
	bool temp = true; // temporarily saves the boolean value, so this function doesn't return 12 values, but only 1 at the end
	for (int i = 0; i < 12; i++) {
		int schedTime;
		schedTime = scheduledEvents[i].getTime();
		if (test == schedTime)
			temp = false; // Once temp is set to false, the function will return false
	}
	return temp;
}

void Venue::addEvent(int Time, string Title) {
	bool temp = true;
	int temp2 = 0;
	int schedTime=0;
	temp = Venue::validTime(Time); // I couldn't figure out how to call validTime within the if-statement below, so I had
	
	if (temp == 1)			   // to use the bool variable temp to allow the if-statement to work
	{
		for (int i = 11; i >= 0; i--) {
			schedTime = scheduledEvents[i].getTime();
			if (schedTime == -1) { // Finds the lowest available slot in scheduledEvents[] and saves the location of the slot
				temp2 = i;	    // to the variable temp, which is used below
			}
		}
		cout << "Event scheduled!\n";

		scheduledEvents[temp2].setTime(Time);   // Sets the time of the new event to the int from main()
											    // (if avaiable. if not, the above if-statement would have returned an error message)
		scheduledEvents[temp2].setTitle(Title); // Sets the title of the new event to the string from main()
	}
	else
		cout << "Failed to schedule event.\n";
}

Event Venue::findEvent(int Time) { //finds the location within scheduledEvents[] of a particular event, given its time
	int temp;
	int temp2;
	bool check = false;
	for (int i = 0; i < 12; i++) { // Runs through each of the 12 slots in sheduledEvents[]
		temp = scheduledEvents[i].getTime(); // Gets the time for each slot in scheduledEvents[]
		if (Time == temp) { // Checks to see whether the input time matches the time in a slot in scheduledEvents[]
			temp2 = i; // Allows the return value below to see which slot it needs to return
			check = 1; // Sets the bool check to true, letting the if-statement below know that the event was found
		}
	}
	if (check == 1)
		return scheduledEvents[temp2]; // Returns the slot in scheduledEvents[] where the time matched the input time
	else
		return Event(); // Returns the default constructor, which results in 'free', because check was false
}

Event Venue::findEvent(string Title) { //finds the location within scheduledEvents[] of a particular event, given its title
	string temp;
	bool check=false;
	int temp2=0;
	for (int i = 0; i < 12; i++) { // Runs through each of the 12 slots in scheduledEvents[]
		temp = scheduledEvents[i].getTitle(); // Gets the title for each slot in scheduledEvents[]
		
		if (Title == temp) { // Checks to see whether the input title matches the title in a slot in scheduledEvents[]
			temp2 = i; // Allows the return values below to known which slot in scheduledEvents[] they should return
			check = true; // Lets the if-statement at the end of the object know whether the right title was found
		}
	}
	if (check == 1) {
		return scheduledEvents[temp2]; // Returns the slot in scheduledEvents[] where the title matched the input title
	}
	else
		return Event(); // Returns the default constructor, which results in a -1, because check was false
}