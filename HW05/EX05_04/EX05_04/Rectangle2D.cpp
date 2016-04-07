using namespace std;
#include <iostream>
#include "Rectangle2D.h"


Rectangle2D::Rectangle2D()
{
	xCenter = 0;
	yCenter = 0;
	width = 1;
	height = 1;
}

void Rectangle2D::setX(double x)
{
	xCenter = x;
}
void Rectangle2D::setY(double y)
{
	yCenter = y;
}
double Rectangle2D::getX() const
{
	return xCenter;
}
double Rectangle2D::getY() const
{
	return yCenter;
}
void Rectangle2D::setWidth(double W)
{
	width = W;
}
void Rectangle2D::setHeight(double H)
{
	height = H;
}
double Rectangle2D::getWidth() const
{
	return width;
}
double Rectangle2D::getHeight() const
{
	return height;
}
double Rectangle2D::getArea() const
{
	return (width*height);
}
double Rectangle2D::getPerimeter() const
{
	return (2 * width + 2 * height);
}
bool Rectangle2D::contains(double x, double y) const
{
	int check = true;
	if ((x <= (xCenter - (width / 2))) || (x >= (xCenter)+(width / 2)))
		check = false;														//These two statements evaluate to 'true' if the point is outside the rectangle
	if ((y <= (yCenter - (height / 2))) || (y >= (yCenter)+(height / 2)))
		check = false;
	return check;
}
bool Rectangle2D::contains(const Rectangle2D &r) const
{
	bool check = true;
	double testX, testY, testW, testH;
	testX = r.getX();	// These four lines pull the info out of 'test2' and make it more easily accessible to 'overlaps'
	testY = r.getY();
	testW = r.getWidth();
	testH = r.getHeight();
	if ((xCenter - (width / 2) >= (testX - (testW / 2))) || (xCenter + (width / 2) <= (testX + (testW / 2))))
		check = false; //Checks to see if the perimeter of 'test' is further from the origin than the perimeter of 'test2' in the x-direction
	if ((yCenter - (height / 2) >= (testY - (testH / 2))) || (yCenter + (height / 2) <= (testY + (testH / 2))))
		check = false; //Checks to see if the perimeter of 'test' is further from the origin than the perimeter of 'test2' in the y-direction
	return check;
}
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	bool check = true;
	int LGcounter = 0; //counter variables used below
	int SMcounter = 0;
	double testX, testY, testW, testH;
	testX = r.getX(); // These four lines pull the info out of 'test2' and make it more easily accessible to 'overlaps'
	testY = r.getY();
	testW = r.getWidth();
	testH = r.getHeight();
	if ((xCenter - (width / 2) > (testX - (testW / 2))) && (xCenter + (width / 2) < (testX + (testW / 2))))		// This pair of if-statements
		SMcounter++;																							// checks to see if the 'test'
	if ((yCenter - (height / 2) > (testY - (testH / 2))) && (yCenter + (height / 2) < (testY + (testH / 2))))	// rectangle is smaller than
		SMcounter++;																							// 'test2' in both dimensions

	if ((xCenter - (width / 2) < (testX - (testW / 2))) && (xCenter + (width / 2) > (testX + (testW / 2))))		// This pair of if-statements
		LGcounter++;																							// checks to see if the 'test'
	if ((yCenter - (height / 2) < (testY - (testH / 2))) && (yCenter + (height / 2) > (testY + (testH / 2))))	// rectangle is larger than
		LGcounter++;																							// 'test2' in both dimensions
	if (LGcounter == 2)
		check = false;																							// If either of these pairs both
	if (SMcounter == 2)																							// evaluate to true, the rectangles
		check = false;																							// can't overlap.
	
	return check;
}