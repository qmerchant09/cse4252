#include <iostream>
using namespace std;

int& getRefVar();
int main() {
	int* ptr;
	*ptr = 3;
	int &ref = *ptr;
	return 0;
}
/*Returning a reference to a local variable causes an error. Im assuming that after the 
  return statement, you cant reference r because its thrown away.*/
int& getRefVar(){
	int r = 10;
	return r;
}
