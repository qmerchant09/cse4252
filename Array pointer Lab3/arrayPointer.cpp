#include <iostream>
#include <string>
using namespace std;

/*  This program prompts the user to enter the size they'd like the array to be. The program then creates two arrays. The first array counts n elements corresponding to the user input. Array 2 contains the odd values from array 1. 
 
Code Written by Quantez Merchant
*/ 

int main() {
	int NUMBER_ELEMENTS;
	cout << "Enter the size you'd like the array to be: ";
	cin >> NUMBER_ELEMENTS;	
	short* array1 = new short[NUMBER_ELEMENTS];	//Allocate space for array1
	
	//Fill array1 with values corresponding to array position
	for(int i = 0; i < NUMBER_ELEMENTS; i++){
		array1[i] = i;
	}

	//Print out contents of Array 1
	cout << "Array1 contains: ";	
	for (int i = 0; i < NUMBER_ELEMENTS; i++){
		cout << array1[i] << " ";
	}

	cout << endl;
	short* array2 = new short[NUMBER_ELEMENTS/2];	//Allocate space for array2
	
	//Put the odd numbers from array1 into array2
	for(int i = 0,j=0; i < NUMBER_ELEMENTS; i++){
		if (array1[i]%2 != 0){
			array2[j] = array1[i];
			j++;
		}
	}

	//Print out contents of Array 2
	cout << "Array2 contains: ";
	for (int i = 0; i < NUMBER_ELEMENTS/2; i++){
		cout << array2[i] << " ";
	}
	
    	cout << endl;
	delete [] array1;		//Deallocate array1
	array1 = NULL;
	delete [] array2;		//Deallocate array2
	array2 = NULL;

	return 0;
}
