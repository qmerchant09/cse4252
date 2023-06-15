#include <iostream>
using namespace std;

class A {
	protected:
		int var;
	public:
		A() { var = 0;}
		void increment() { var++; }
		virtual void decrement() { var--; }
		virtual void print() {cout << "var = " << var << endl;}
		A aRet(A aVal) {return aVal;}
};

class B : A {
	protected: 
		int varB;
	public:
		B() {varB = 0;}
		void increment() { var += 3; }
		virtual void decrement() { var -= 3; }
		void print() {cout << "var = " <<  var << endl << "varB = " << varB << endl;};
};

int main() {
	A a;
	A * ptr;
	B b;
	//A c;
	//c = a.aRet(b);
	//b.A::print();
	//B * ptr;
	//ptr = &b;
	a = b;
	a.print();
	ptr = &a;
	//ptr -> increment();
	ptr -> print(); 
	//ptr -> decrement();
	//ptr -> print();
}
