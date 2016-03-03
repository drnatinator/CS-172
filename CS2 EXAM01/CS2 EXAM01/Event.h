// Author: Nate Williams
// Purpose: CS2 Exam01
// I affirm that all code given below was written solely by me, Nate Williams, and that any help I received adhered 
// to the rules stated for this exam. 


#ifndef _EVENT_H_
#define _EVENT_H_

class Event {
private:
	int Time;
	string Title;
public:
	Event(int, string);
	Event();
	int getTime();
	string getTitle();
	void setTime(int);
	void setTitle(string);
};

#endif