// Quantez Merchant Circle.h file
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

public:
	//Default constructor
	Circle();
	
	//Constructor with params
	Circle(int xVal,int yVal,double r);
	
	//Copy constructor 
	Circle(const Circle &c);
	
	//Getters and Setters 
	void set(int xVal, int yVal, double r);
	void setRad(double r);
	void setX(int xVal);
	void setY(int yVal);
	int getX() const;
	int getY() const;
	double getRad() const;
	void translate(int horizShift, int vertShift);
	double getArea() const;
	void displayCircle() const;
	bool intersect(Circle c) const;
	bool operator==(Circle c) const;
	friend Circle operator+(const Circle &c1, const Circle &c2);
private:
	int x;
	int y;
	double radius;
};
#endif
