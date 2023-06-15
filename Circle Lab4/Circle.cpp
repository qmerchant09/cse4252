// Quantez Merchant Circle.cpp file
#include "Circle.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

/*
* Now follows each of the method implementations. The <class>:: that
* precedes each method identifies that the function belongs to the class
*/

//Default constructor
Circle::Circle(){
	x = 0;
	y = 0;
	radius = 5;
}

//Constructor to create a new circle with the given values
Circle::Circle(int xVal, int yVal, double r){
	x = xVal;
	y = yVal;
	if (r < 0){
		cerr << "Error: radius cannot be less than 0" << endl;
		exit(1); 
	}else{
		radius = r;
	}
}

//Constructor that copies data from given circle to new circle 
Circle::Circle(const Circle &c){
	x = c.getX();
	y = c.getY();
	radius = c.getRad();
}

//Set all the value fields of the circle 
void Circle::set(int xVal,int yVal, double r){
	x = xVal;
	y = yVal;
	if (r < 0){
		cerr << "Error: radius cannot be less than 0" << endl;
		exit(1); 
	}else{
		radius = r;
	}
}

//Set the radius of the circle 
void Circle::setRad(double r){
	if (r < 0){
		cerr << "Error: radius cannot be less than 0" << endl;
		exit(1); 
	}else{
		radius = r;
	}
}

//Set the x value of the circle 
void Circle::setX(int xVal){
	x = xVal;
}

//Set the y value of the circle 
void Circle::setY(int yVal){
	y = yVal;
}


//Get the x value of the circle 
int Circle::getX() const{
	return x;
}

//Get the y value of the circle 
int Circle::getY() const{
	return y;
}

//Get the x value of the circle 
double Circle::getRad() const{
	return radius;
}

//Translates the circle along x and y axis 
void Circle::translate(int horizShift, int vertShift){
	x += horizShift;
	y += vertShift;
}

//Computes the area of the circle 
double Circle::getArea() const{
	return 3.14*radius*radius; 
}

//Displays the x, y, and radius of the circle 
void Circle::displayCircle() const {
	cout << "Radius: " << radius << " at point x = " << x << ", y = " << y << endl;
}

//Determines if the given circle intersects the calling circle 
bool Circle::intersect(Circle c) const {
	bool b;
	int xx = x - c.getX();
	int yy = y - c.getY();
	xx *= xx;
	yy *= yy;
	int d = sqrt(xx + yy);
	if (d == 0 && radius == c.getRad()) {
		b = false;
	}else if(d > radius + c.getRad()){
		b = false;
	}else if (d < abs(radius - c.getRad())) {
		b  = false;
	}else{
		b = true;
	}
	return b;
}

//Determines if both circles are the same 
bool Circle::operator==(Circle c) const {
	bool b;
	if(x == c.getX() && y == c.getY() && radius == c.getRad()){
		b = true;
	}else{
		b = false;
	}
	return b;
}

//Creates a new cirlce with elements from the given circles
Circle operator+(const Circle &c1, const Circle &c2) {
	int r = c1.getRad() + c2.getRad();
	int xVal;
	int yVal;
	if (c1.getX() > c2.getX()) {
		xVal = c1.getX();
	}else{
		xVal = c2.getX();
	}
	if (c1.getY() > c2.getY()) {
		yVal = c1.getY();
	}else{
		yVal = c2.getY();
	}
	return(Circle(xVal,yVal,r));
}
