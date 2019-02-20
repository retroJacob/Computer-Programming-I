
/*
Project: Ch02 project02
Author: Jacob Morones
Description:

*/


#include <iostream>

#include <string> 

using namespace std;

int const SECRET = 11;

int main()
{
	 
	int num1, num2;
	int count = 0;
	int newNum;
	char letter1, letter2;

	cout << "Please enter two integers seperated by a space: ";
	cin >> num1 >> num2;
	cout << endl;
	count++;

	cout << "Please enter two characters seperated by a space: ";
	cin >> letter1 >> letter2;
	cout << endl;

	cout << "The Value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
	count++;

	cout << "letter1 = '" << letter1 << " and letter 2 = '" << letter2 << "'" << endl;
	count++;

	newNum = (num1 * 2) + num2;
	cout << "The value of newNum is " << newNum << endl;
	count++;

	newNum = newNum + SECRET;
	cout << "The new of newNum is " << newNum << endl;
	count++;

	int letter1Num = static_cast<int>(letter1);
	cout << "The integer value of '" << letter1 << "' is" << letter1Num << endl;
	count++;

	int letter2Num = static_cast<int>(letter2);
	cout << "The integer value of '" << letter2 << "' is" << letter2Num << endl;
	count++;

	cout << "The total number of output lines is " << count << endl;

	double RATE = 12.50;
	double wages;
	string name;
	double hoursWorked;

	cout << "Type your last name and enter " << name << endl;
	cin >> name;
	count--;

	cout << "Enter a decimal number between 0 and 70 ";
	cin >> hoursWorked;
	count--;


	wages =  (RATE * hoursWorked);
	cout << count << endl;
	
	cout << "Name: " << name << endl;
	cout << "Pay Rate: $" << RATE << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	cout << "Salary: $" << wages << endl;
	
	return 0;
}
 
/*Please enter two integers seperated by a space: 5 9

Please enter two characters seperated by a space: S e

The Value of num1 is 5 and the value of num2 is 9
letter1 = 'S and letter 2 = 'e'
The value of newNum is 19
The new of newNum is 30
The integer value of 'S' is83
The integer value of 'e' is101
The total number of output lines is 7
*/

/*Please enter two integers seperated by a space: 5 9

Please enter two characters seperated by a space: S e

The Value of num1 is 5 and the value of num2 is 9
letter1 = 'S and letter 2 = 'e'
The value of newNum is 19
The new of newNum is 30
The integer value of 'S' is83
The integer value of 'e' is101
The total number of output lines is 7
*/

/*Please enter two integers seperated by a space: 13 28

Please enter two characters seperated by a space: f H

The Value of num1 is 13 and the value of num2 is 28
letter1 = 'f and letter 2 = 'H'
The value of newNum is 54
The new of newNum is 65
The integer value of 'f' is102
The integer value of 'H' is72
The total number of output lines is 7
Type your last name and enter
Flinstone
Enter a decimal number between 0 and 70 48.30
5
Name:             Flinstone
Pay Rate: $       12.5
Hours Worked:     48.3
Salary: $         603.75*/

/*Please enter two integers seperated by a space: 32 15

Please enter two characters seperated by a space: G n

The Value of num1 is 32 and the value of num2 is 15
letter1 = 'G and letter 2 = 'n'
The value of newNum is 79
The new of newNum is 90
The integer value of 'G' is71
The integer value of 'n' is110
The total number of output lines is 7
Type your last name and enter
Jetson
Enter a decimal number between 0 and 70 58.45
5
Name: Jetson
Pay Rate: $12.5
Hours Worked: 58.45
Salary: $730.625*/

/*Please enter two integers seperated by a space: 39 8

Please enter two characters seperated by a space: P l

The Value of num1 is 39 and the value of num2 is 8
letter1 = 'P and letter 2 = 'l'
The value of newNum is 86
The new of newNum is 97
The integer value of 'P' is80
The integer value of 'l' is108
The total number of output lines is 7
Type your last name and enter
Morones
Enter a decimal number between 0 and 70 39.45
5
Name: Morones
Pay Rate: $12.5
Hours Worked: 39.45
Salary: $493.125
Press any key to continue . . .*/
 