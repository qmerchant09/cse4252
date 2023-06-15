// Quantez Merchant Shapes.h file
#ifndef SHAPES_H
#define SHAPES_H

class Shape {
        public:
                virtual double area() const = 0;
                virtual void display() const = 0;
};
                
class Circle : public Shape {
        public:
                Circle(double r);
                double area() const;
                void display() const;
        private:
                double radius;

};

class Rectangle : public Shape {
        public:
                Rectangle(double l, double w);
                double area() const;
                void display() const;
        private:
                double length;
                double width;
};

class Quadrilateral : public Shape {	
	protected: 
		double length;
		double height;
};

class Trapezoid : public Quadrilateral {	
	public:
		Trapezoid(double l, double h, double s);
                double area() const;
                void display() const;
	private:
		double side;
};
#endif
