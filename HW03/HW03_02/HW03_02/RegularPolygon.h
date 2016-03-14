#ifndef _REGULARPOLYGON_H_
#define _REGULARPOLYGON_H_

class RegularPolygon {
private:
	int n;
	double side;
	double x;
	double y;
public:
	RegularPolygon();
	RegularPolygon(int, double);
	RegularPolygon(int, double, double, double);
	double getPerimeter();
	double getArea();
	int getN();
	double getSide();
	double getX();
	double getY();
	void setN(int);
	void setSide(double);
	void setX(double);
	void setY(double);
};

#endif
