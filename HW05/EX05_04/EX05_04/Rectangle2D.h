#ifndef _RECTANGLE2D_H_
#define _RECTANGLE2D_H_

class Rectangle2D {
private:
	double xCenter;
	double yCenter;
	double width;
	double height;
public:
	Rectangle2D();
	void setX(double);
	void setY(double);
	double getX() const;
	double getY() const;
	void setWidth(double);
	void setHeight(double);
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;
	bool contains(double, double) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;

};



#endif
