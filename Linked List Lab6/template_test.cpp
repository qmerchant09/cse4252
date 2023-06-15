//Quantez Merchant
#include "LinkedList.h"

#include <iostream>
using namespace std;

int main() {
	cout << "Lab 6 test" << endl;
	LinkedList<int> il;
	LinkedList<string> sl; 
	
	cout << "Testing add to an empty list" << endl;
	il.add(11);
	sl.add("you");
	il.printList();
	sl.printList();

	cout << endl;

	cout << "Testing add to a list with data" << endl;
	sl.add("Its");
	il.add(10);
	il.printList();
	sl.printList();

	cout << endl;

	cout << "Testing insertAt valid points" << endl;
	il.insertAt(2,12);
	sl.insertAt(1,"not");
	il.printList();
	sl.printList();
	
	cout << endl;

	cout << "Testing insertAt invalid point" << endl;	
	il.insertAt(-1,12);
	sl.insertAt(12,"not");
	il.printList();
	sl.printList();

	cout << endl;

	cout << "Testing true findVal" << endl;	
	cout << "Finding value 12: " << il.findVal(12) << endl;
	cout << "Finding value you: " << sl.findVal("you") << endl;	
	
	cout << endl;

	cout << "Testing false findVal" << endl;	
	cout << "Finding value 100: " << il.findVal(100) << endl;
	cout << "Finding value wont: " << sl.findVal("wont") << endl;
		
	cout << endl;

	cout << "Testing copy constructor" << endl;
	LinkedList<int> ilCpy(il);
	LinkedList<string> slCpy(sl);
	ilCpy.printList();
	slCpy.printList();
	
	cout << endl;
	
	cout << "Emptying all created lists" << endl;
	il.removeAll();
	ilCpy.removeAll();
	il.printList();
	ilCpy.printList();
	sl.removeAll();
	slCpy.removeAll();
	sl.printList();
	slCpy.printList();
	
	cout << endl;
	
	return 0;
}
