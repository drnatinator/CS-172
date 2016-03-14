//Author: Nate Williams
//Date: 3/14/16
//Project: HW03_02
//Author: Nate Williams
//Date: 3/14/16
//Project: HW03_02

#include "RegularPolygon.h"
#include <iostream>
using namespace std;

int main() {
	RegularPolygon test1; // uses default constructor
	RegularPolygon test2(6, 4); // uses second constructor, meaning that it's centered at the origin
	RegularPolygon test3(10, 4, 5.6, 7.8); //uses third constructor, so it has a custom center coordinate
	
	cout << "The perimeter of the first polygon is: " << test1.getPerimeter() << " and the area is: " << test1.getArea() << endl;
	cout << "The perimeter of the first polygon is: " << test2.getPerimeter() << " and the area is: " << test2.getArea() << endl;
	cout << "The perimeter of the first polygon is: " << test3.getPerimeter() << " and the area is: " << test3.getArea() << endl;
}