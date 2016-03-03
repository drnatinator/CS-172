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



int main()
{
	Venue theSpot;
	theSpot.addEvent(10, "Coffee Hour");    //Should work -works!
	theSpot.addEvent(11, "Brunch w/ Bob");  //Should work -works!
	theSpot.addEvent(11, "Bingo"); //Shouldn't work -doesn't work!

	cout << theSpot.findEvent(10).getTitle() << endl; //Should find Coffee Hour -does!
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;  //Should find 11 o'clock -does!
	cout << theSpot.findEvent("Bingo").getTime() << endl; //Should print -1, because Bingo ain't there! -does!

	return 0;
}
