#include "RegularPolygon.h"
#include <iostream>
using namespace std;


RegularPolygon::RegularPolygon() { //default constructor, equalateral triangle with side length 1
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(int N, double Side) { // second constructor, takes inputs for number of sides and side length, but not x/y coordinates
	n = N;
	side = Side;
}
RegularPolygon::RegularPolygon(int N, double Side, double X, double Y) { //third constructor, takes all four inputs
	n = N;
	side = Side;
	x = X;
	y = Y;
}
double RegularPolygon::getPerimeter() { //finds perimeter of the polygon
	double output = 0;
	output = (side * n);
	return output;
}
double RegularPolygon::getArea() { //finds area of the polygon
	double area;
	area = ((n*(pow(side, 2))) / (4 * tan(3.14159265359 / n)));
	return area;
}
int RegularPolygon::getN() { // I added these ones mostly for fun, so that the program could be expanded. This would return the nubmer of sides to main(), were that ever needed
	return n;
}
double RegularPolygon::getSide() {
	return side;
}
double RegularPolygon::getX() {
	return x;
}
double RegularPolygon::getY() {
	return y;
}
void RegularPolygon::setN(int N) {
	N = n;
}
void RegularPolygon::setSide(double Side) {
	side = Side;
}
void RegularPolygon::setX(double X) {
	x = X;
}
void RegularPolygon::setY(double Y) {
	y = Y;
}