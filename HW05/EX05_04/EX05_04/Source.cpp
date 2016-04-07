//Nate Williams
//EX05_04
//4/6/2016

using namespace std;
#include <iostream>
#include "Rectangle2D.h"

int main()
{
	bool check;
	Rectangle2D test;
	const Rectangle2D test2;
	test.setX(1);					//
	test.setY(1);					// Allows you to test the program! :)
	test.setWidth(1);				//
	test.setHeight(1);				//
	check = test.contains(1, 1);
	cout << "test.contains(point):  " << check<<endl;
	check = test.contains(test2);
	cout << "test.contains(default rectangle):  "<<check << endl;
	check = test.overlaps(test2);
	cout << "test.overlaps(default rectangle):  "<<check<<endl;
	return 0;
}