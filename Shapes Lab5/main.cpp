#include <iostream>
#include "Shapes.h"
using namespace std;

void print (const Shape& s) {
        s.display();
}

int main() {
	Circle c(10);
	Rectangle r(3,4);
      	//Quadrilateral q(2, 4); //Uncommenting this line should cause an error

      	Trapezoid trap(3, 4, 5);

        print(c);
      	print(r);
      	print(trap);

        return 0;
}

