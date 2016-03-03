// Author: Nate Williams
// Purpose: CS2 Exam01
// I affirm that all code given below was written solely by me, Nate Williams, and that any help I received adhered 
// to the rules stated for this exam. 


#ifndef _VENUE_H_
#define _VENUE_H_

class Venue {
private:
	Event scheduledEvents[12];
	int numEvents;
	bool validTime(int);
public:
	void addEvent(int, string);
	Event findEvent(int);
	Event findEvent(string);

};

#endif