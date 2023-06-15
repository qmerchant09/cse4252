// Quantez Merchant Shapes.cpp file
#include "Shapes.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

// Circle Methods
Circle::Circle(double r){
        radius = r;
}

double Circle::area() const{
        return M_PI*radius*radius;
}

void Circle::display() const {
        cout << "Circle: " << radius << " | Area = " << this->area() << endl;
}

// Rectangle Methods
Rectangle::Rectangle(double l, double w) {
	length = l;
	width = w;
}

double Rectangle::area() const{
	return length*width;
}

void Rectangle::display() const {
        cout << "Rectangle: " << length << ", " << width << " | Area = " << this->area() << endl;
}

// Trapezoid Methods
Trapezoid::Trapezoid(double l, double h, double s){
	length = l;
	height = h;
	side = s;
}

double Trapezoid::area() const {
	return ((length + side)/2)*height; 
}

void Trapezoid::display() const {
        cout << "Trapezoid: " << length << ", " << height << ", " << side << " | Area = " << this->area() << endl;
}

