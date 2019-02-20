/*
			Author: Jacob Morones
			Class: Computer Programming I
			Description: This program will read a file with test scores then outpute the ranges and number of students
*/

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

void getResults(ifstream& inFile, int numArray[]);
void printResults(int numArray[]);

int main()
{
	int numArray[8] = { 0 };
	


	ifstream inFile;
	inFile.open("Ch8Pr1DataIn.txt");

	getResults(inFile, numArray);
	printResults(numArray);

	return 0;

}
void getResults(ifstream& inFile, int numArray[])
{
	int score;
	inFile >> score;

	while (inFile)
	{
		if (score / 25 <= 7)
			numArray[(score / 25)]++;
		else
			numArray[7]++;

		inFile >> score;
	}
}

void printResults(int numArray[])
{

	for (int idx = 0; idx <= 7; idx++)
	{
		switch (idx) {
		case 0:
			cout << "Scores 0-24:";
			cout << numArray[idx] << endl;
			break;
		case 1:
			cout << "Scores 25-49:";
			cout << numArray[idx] << endl;
			break;
		case 2:
			cout << "Scores 50-74:";
			cout << numArray[idx] << endl;
			break;
		case 3:
			cout << "Scores 75-99:";
			cout << numArray[idx] << endl;
			break;
		case 4:
			cout << "Scores 100-124:";
			cout << numArray[idx] << endl;
			break;
		case 5:
			cout << "Scores 125-149:";
			cout << numArray[idx] << endl;
			break;
		case 6:
			cout << "Scores 150-174:";
			cout << numArray[idx] << endl;
			break;
		case 7:
			cout << "Scores 175-200:";
			cout << numArray[idx] << endl;
			break;
		}

	}
	
}
/*
Scores 0-24:1
Scores 25-49:2
Scores 50-74:0
Scores 75-99:6
Scores 100-124:1
Scores 125-149:3
Scores 150-174:5
Scores 175-200:8
*/




