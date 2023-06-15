#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

/* This program prompts the user to enter in a file. It then determines how many bytes the file is, and seperates the data into two output files, intVals and junkVals. 

Code Modified by Quantez Merchant */

bool getInt(ifstream&, bool&, int&, string&);
int getFileSize(ifstream&);

int main ()
{
	int intData;
	string junkData;
	bool valueIsGood = false;
	string fileName = "";
	cout << "Enter the input filename: ";
	cin >> fileName;
	cout <<endl;
	
	//Open the file in read mode with the ifstream object fin
	ifstream fin(fileName.c_str());
		
	//Check if the file opened successfully. If not, exit the program
	if (!fin.is_open()) {
		cerr << fileName << " cannot be opened." << endl;
		exit(10);	
	}

	//Print the size of the file
	cout << "File Size: " << getFileSize(fin) << " bytes." << endl;

	//Return the file back to the start
	fin.seekg(0,ios::beg);

	//Open the files for int vals and junk vals and check if they opened sucessfully
	ofstream intOut("intVals.txt");
	if (!intOut.is_open()) {
		cerr << "intVals.txt" << " cannot be opened." << endl;
		exit(10);
	}
	ofstream junkOut("junkVals.txt");
	if (!intOut.is_open()) {
		cerr << "junkVals.txt" << " cannot be opened." << endl;
		exit(10);
	}

	//Loop through the given file seperating ints into int file and other values into junk file 
	while (getInt(fin, valueIsGood, intData, junkData)){
		if (valueIsGood){
			intOut << intData << endl; 
		}else{
			junkOut << junkData << endl;
		}
	}

	//Determine the number of lines in the user supplied file
	string line;
	int numOfLines;
	fin.clear();
	fin.seekg(0,ios::beg);
	while (getline(fin,line)){
		numOfLines++;
	}
	cout << fileName << " contains " << numOfLines << " lines." << endl;
	
	// Close the files
	junkOut.close();
	intOut.close();
	fin.close();
	
	cout <<"You can now open intVals.txt and junkVals.txt to see the output!"<<endl;
	return 0;
}

//Determines the filesize of the user supplied file
int getFileSize(ifstream& fin){
	int fileSize = 0; //For our case, fileSize will not exceed integer's limit so we do not need long
	//Move the get pointer to the end of the file
	fin.seekg(0,ios::end);
	//Get the position of the get pointer
	fileSize = fin.tellg();
	return fileSize;
}

// Function returns False if you cannot continue reading the file i.e. either the EOF or the Bad flag got set
bool getInt(ifstream& fin, bool& goodFlag, int& intData, string& junkData){
	bool canContinue;
	string line;
	getline(fin,line);
	if (fin.eof()){
		canContinue = false;	
	}else{	
		canContinue = true;
		goodFlag = true;
		//Check if end of line contains a \r character and then loop through line till a non digit is found 
		if (line[line.length()-1] == '\r'){ 
			for (int i = 0; i < line.length()-1; i++){
				if (!isdigit(line[i])){
					goodFlag = false;
					break;
				}
			}
		}else{
			for (int i = 0; i < line.length(); i++){
				if (!isdigit(line[i])){
					goodFlag = false;
					break;
				}
			}
		} 
 
		if(goodFlag){
			intData = atoi(line.c_str());
		}else{
			junkData = line;
		}			
	}
	return canContinue;
}
