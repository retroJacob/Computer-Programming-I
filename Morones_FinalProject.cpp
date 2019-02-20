/*
Author: Jacob Morones
Class: Computer Programming I
Description: This program will input employee information for 2 days then will output the amount of money the employee gets paid.
*/
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

void calculateMoney(double& moneyOwed);
void calculateMoneyDayTwo(double& moneyOwedTwo);

int main()
{
	double moneyOwed = 0;
	double moneyOwedTwo = 0;

 

	calculateMoney(moneyOwed);
	calculateMoneyDayTwo(moneyOwedTwo);

	cout << "The final result is: $" << moneyOwed + moneyOwedTwo << endl;
 
}
void calculateMoney(double& moneyOwed)
{

	int day = 0; //this will get the day it is, 0 is sunday, 1 is monday, etc.
	char dayStart;// this will get the time you started
	double startHour;
	char dayEnd; //this will get the time you ended
	double endHour;
	double hoursWorked = 0;
	int location = 0;





	cout << "Enter location, day, start, and end time for day 1: ";
	cin >> location >> day >> dayStart >> dayEnd;
	cout << endl;


	switch (dayStart) {
	case '1':
		startHour = 9;
		break;
	case '2':
		startHour = 9.5;
		break;
	case '3':
		startHour = 10;
		break;
	case '4':
		startHour = 10.5;
		break;
	case '5':
		startHour = 11;
		break;
	case '6':
		startHour = 11.5;
		break;
	case '7':
		startHour = 12;
		break;
	case '8':
		startHour = 12.5;
		break;
	case '9':
		startHour = 13;
		break;
	case 'A':
		startHour = 13.5;
		break;

	case 'B':
		startHour = 14;
		break;

	case 'C':
		startHour = 14.5;
		break;
	case 'D':
		startHour = 15;
		break;
	case 'E':
		startHour = 15.5;
		break;
	case 'F':
		startHour = 16;
		break;
	case 'G':
		startHour = 16.5;
		break;
	case 'H':
		startHour = 17;
		break;

	}

	switch (dayEnd) {
	case '1':
		endHour = 9;
		break;
	case '2':
		endHour = 9.5;
		break;
	case '3':
		endHour = 10;
		break;
	case '4':
		endHour = 10.5;
		break;
	case '5':
		endHour = 11;
		break;
	case '6':
		endHour = 11.5;
		break;
	case '7':
		endHour = 12;
		break;
	case '8':
		endHour = 12.5;
		break;
	case '9':
		endHour = 13;
		break;
	case 'A':
		endHour = 13.5;
		break;

	case 'B':
		endHour = 14;
		break;

	case 'C':
		endHour = 14.5;
		break;
	case 'D':
		endHour = 15;
		break;
	case 'E':
		endHour = 15.5;
		break;
	case 'F':
		endHour = 16;
		break;
	case 'G':
		endHour = 16.5;
		break;
	case 'H':
		endHour = 17;
		break;

	}


	hoursWorked = endHour - startHour;
	location = location / 100;

	switch (location)
	{
	case 1:
		moneyOwed = moneyOwed + (hoursWorked * 10);

		if (hoursWorked > 5) {
			hoursWorked = hoursWorked - 5;
			moneyOwed = moneyOwed + (hoursWorked * 5);
		}

		break;
	case 2:
		moneyOwed = hoursWorked * 7.5;
		if (hoursWorked > 6)
			moneyOwed = moneyOwed + ((hoursWorked - 6) * 7.5);
		break;
	case 3:
		if (hoursWorked <= 4)
			moneyOwed = hoursWorked * 9.25;
		else
			moneyOwed = (4 * 9.25) + ((hoursWorked - 4) * 10.5);
		break;
	case 4:
		if (day == 1 || day == 7)
			moneyOwed = hoursWorked * 13.5;
		else
			moneyOwed = hoursWorked * 6.75;

		break;
	case 5:
		if (hoursWorked <= 6)
			moneyOwed = hoursWorked * 8;
		else
			moneyOwed = (6 * 8) + (12 * (hoursWorked - 6));

		break;
	}
}

void calculateMoneyDayTwo(double& moneyOwedTwo)
{
	int day = 0; //this will get the day it is, 0 is sunday, 1 is monday, etc.
	char dayStart;// this will get the time you started
	double startHour;
	char dayEnd; //this will get the time you ended
	double endHour;
	double hoursWorked = 0;
	int location = 0;





	cout << "Enter location, day, start, and end time for day 2: ";
	cin >> location >> day >> dayStart >> dayEnd;
	cout << endl;



	switch (dayStart) {
	case '1':
		startHour = 9;
		break;
	case '2':
		startHour = 9.5;
		break;
	case '3':
		startHour = 10;
		break;
	case '4':
		startHour = 10.5;
		break;
	case '5':
		startHour = 11;
		break;
	case '6':
		startHour = 11.5;
		break;
	case '7':
		startHour = 12;
		break;
	case '8':
		startHour = 12.5;
		break;
	case '9':
		startHour = 13;
		break;
	case 'A':
		startHour = 13.5;
		break;

	case 'B':
		startHour = 14;
		break;

	case 'C':
		startHour = 14.5;
		break;
	case 'D':
		startHour = 15;
		break;
	case 'E':
		startHour = 15.5;
		break;
	case 'F':
		startHour = 16;
		break;
	case 'G':
		startHour = 16.5;
		break;
	case 'H':
		startHour = 17;
		break;

	}

	switch (dayEnd) {
	case '1':
		endHour = 9;
		break;
	case '2':
		endHour = 9.5;
		break;
	case '3':
		endHour = 10;
		break;
	case '4':
		endHour = 10.5;
		break;
	case '5':
		endHour = 11;
		break;
	case '6':
		endHour = 11.5;
		break;
	case '7':
		endHour = 12;
		break;
	case '8':
		endHour = 12.5;
		break;
	case '9':
		endHour = 13;
		break;
	case 'A':
		endHour = 13.5;
		break;

	case 'B':
		endHour = 14;
		break;

	case 'C':
		endHour = 14.5;
		break;
	case 'D':
		endHour = 15;
		break;
	case 'E':
		endHour = 15.5;
		break;
	case 'F':
		endHour = 16;
		break;
	case 'G':
		endHour = 16.5;
		break;
	case 'H':
		endHour = 17;
		break;

	}


	hoursWorked = endHour - startHour;
	location = location / 100;

	switch (location)
	{
	case 1:
		moneyOwedTwo = moneyOwedTwo + (hoursWorked * 10);

		if (hoursWorked > 5) {
			hoursWorked = hoursWorked - 5;
			moneyOwedTwo = moneyOwedTwo + (hoursWorked * 5);
		}

		break;
	case 2:
		moneyOwedTwo = hoursWorked * 7.5;
		if (hoursWorked > 6)
			moneyOwedTwo = moneyOwedTwo + ((hoursWorked - 6) * 7.5);
		break;
	case 3:
		if (hoursWorked <= 4)
			moneyOwedTwo = hoursWorked * 9.25;
		else
			moneyOwedTwo = (4 * 9.25) + ((hoursWorked - 4) * 10.5);

		break;
	case 4:
		if (day == 1 || day == 7)
			moneyOwedTwo = hoursWorked * 13.5;
		else
			moneyOwedTwo = hoursWorked * 6.75;

		break;
	case 5:
		if (hoursWorked <= 6)
			moneyOwedTwo = hoursWorked * 8;
		else
			moneyOwedTwo = (6 * 8) + (12 * (hoursWorked - 6));

		break;
	}
}
/*
Enter location, day, start, and end time for day 1: 125 2 1 7

Enter location, day, start, and end time for day 2: 125 3 5 H

The final result is: $95*/

/*
Enter location, day, start, and end time for day 1: 214 4 1 H

Enter location, day, start, and end time for day 2: 314 5 5 H

The final result is: $133*/

/*
Enter location, day, start, and end time for day 1: 318 1 1 H

Enter location, day, start, and end time for day 2: 319 3 3 D

The final result is: $126.5
*/

/*
Enter location, day, start, and end time for day 1: 423 1 1 7

Enter location, day, start, and end time for day 2: 500 2 5 H

The final result is: $88.5*/

/*
Enter location, day, start, and end time for day 1: 529 6 1 G

Enter location, day, start, and end time for day 2: 100 4 2 G

The final result is: $146
*/