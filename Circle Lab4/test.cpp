// Quantez Merchant test.cpp file 
#include "Circle.h"
#include <iostream>

using namespace std;

int main(){
	//Default Constructor 
	Circle c1;
	cout << "Circle 1 data(Default constructor): "; 
	c1.displayCircle();

	//Constructor with data 
	Circle c2(3,-1,99);
	cout << "Circle 2 data(Constructor with data): "; 
	c2.displayCircle();
	
	//Copy constructor 
	Circle c3(c2);
	cout << "Circle 3 data(Copy constructor): "; 
	c3.displayCircle();
	
	cout << endl;

	//Set method 
	cout << "Changing cirlce 3 data with set: "; 
	c3.set(-10,-19,1100);
	c3.displayCircle();
	
	cout << endl;

	//General setters and getters
	cout << "Changing cirlce 1 data with setX to 6 " << endl; 
	c1.setX(6);
	cout << "Changing cirlce 1 data with setY to 3 " << endl; 
	c1.setY(3);
	cout << "Changing cirlce 1 data with setRad to 2 " << endl; 
	c1.setRad(2);
	cout << "Getting cirlce 1 data with getX: " << c1.getX() << endl; 
	cout << "Getting cirlce 1 data with getY: " << c1.getY() << endl; 
	cout << "Getting cirlce 1 data with getRad: " << c1.getRad() << endl << endl; 
	
	//Translate method	
	c2.translate(-3,9);
	cout << "Translating circle 2 by -3,9: "; 
	c2.displayCircle(); 
	cout << endl;
	
	//Area method
	cout << "The area of circle 1 is: " << c1.getArea() << endl << endl;
	
	//Inersect method
	cout << "Testsing intersect false: " << c1.intersect(c2) << endl; 
	c2.set(8,3,2);
	cout << "Testsing intersect true: " << c1.intersect(c2) << endl << endl; 

	//Operator== method
	cout << "Changing cirlce 1 data to match c3" << endl; 
	c1.set(-10,4,1100);
	cout << "Testsing operator== true (c1 == c3): " << c1.operator==(c3) << endl; 
	cout << "Testsing operator== false (c1 == c2): " << c1.operator==(c2) << endl << endl; 

	//Operator+ goes here
	Circle c4 = operator+(c1,c2);	
	cout << "Testsing operator+ circle 4 data is: "; 
	c4.displayCircle();
	cout << endl;
	cout << "circle 1 and circle 2 data: ";
	c1.displayCircle();
	c2.displayCircle();
	cout << endl;

	//Error checking 
	cout << "Testsing setting circle 1 rad to negative: "; 
	c1.setRad(-1); 
	return 0;
}
