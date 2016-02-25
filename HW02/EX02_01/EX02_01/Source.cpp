// Nate Williams
// 2/23/16
// 9.2
// HW02

using namespace std;
#include <iostream>


class Fan
{
public:
	int speed; // speed of fan
	bool on; // whether it's on or off
	double radius; // radius of fan

	Fan() 
	{
		speed = 1; // default setting for fan
		on = false;
		radius = 5;
	}
	Fan(int newspeed, bool on1, double rad) { // takes input from another function to change the settings for a particular fan
		speed = newspeed; 
		on = on1;
		radius = rad;
	}
};

int main() {
	Fan fan1(3, true, 10); // sets the conditions for fan1, as prescribed in he book
	Fan fan2(2, false, 5); // sets the conditions for fan2, as prescribed in he book

	cout << "The speed of fan 1 is " << fan1.speed << ", it is ";
	if (fan1.on = true) //Checks to see if fan1 is on or off
		cout << "on, and its radius is ";
	else
		cout << "off, and its radius is ";
	cout << fan1.radius << "."<< endl;

	cout << "The speed of fan 2 is " << fan2.speed << ", it is ";
	if (fan2.on = false) // checks to see if fan2 is on or off
		cout << "on, and its radius is ";
	else
		cout << "off, and its radius is ";
	cout << fan2.radius << ".\n";

	int wierdpause;
	cin >> wierdpause; // for some reason, ni my version of VisualStudio, it closes out of the console window immediately, instead of waiting for the user to press enter, so this "fixes" it
}