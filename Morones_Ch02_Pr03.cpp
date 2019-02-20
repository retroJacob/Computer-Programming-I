/*
	Author: Jacob Morones
	Class: Computer Programming I
	Project: calculates the cost of painting and installing carpet in a room
*/

#include<iostream>
using namespace std;
int main()
{
	double roomLength;
	double roomWidth;
	double roomHeight;

	double doorWidth;
	double doorHeight;

	double windowOneWidth;
	double windowOneHeight;
	double windowTwoWidth;
	double windowTwoHeight;

    double shelfWidth;
	double shelfHeight;

	double paintPrice;
	double carpetPrice;

	cout << "Enter the length of your room ";
	cin  >> roomLength;
	cout << endl;
	cout << "Enter the width of your room  ";
	cin  >> roomWidth;
	cout << endl;
	cout << "Enter the height of your room ";
	cin  >> roomHeight;
	cout << endl;
	
	cout << "Enter the width of your door ";
	cin  >> doorWidth;
	cout << endl;
	cout << "Enter the height of your door ";
	cin  >> doorHeight;
	cout << endl;
	
	cout << "Enter the width of your first window ";
	cin  >> windowOneWidth;
	cout << endl;
	cout << "Enter the height of your first window ";
	cin  >> windowOneHeight;
	cout << endl;


	cout << "Enter the width of your second window ";
	cin  >> windowTwoWidth;
	cout << endl;
	cout << "Enter the height of your second window ";
	cin  >> windowTwoHeight;
	cout << endl;
	

	cout << "Enter the width of your bookshelf ";
	cin  >> shelfWidth;
	cout << endl;
	cout << "Enter the height of your bookshelf ";
	cin  >> shelfHeight;
	cout << endl;


	cout << "Enter the price of paint per square foot ";
	cin  >> paintPrice;
	cout << endl;

	cout << "Enter the price of carpet per square yard ";
	cin  >> carpetPrice;
	cout << endl;

	double roomArea = roomLength * roomWidth * roomHeight;
	cout << "The room's dimensions is " << roomArea << " feet";
	cout << endl;

	double  doorArea = doorWidth * doorHeight;
	cout << "The area of your door is " << doorArea << " feet";
	cout << endl;

	double windowOneArea = windowOneWidth * windowOneHeight;
	cout << "The area of your first window is " << windowOneArea << " feet";
	cout << endl;

	double windowTwoArea = windowTwoWidth * windowTwoHeight;
	cout << "The area of your second window is " << windowTwoArea << " feet ";
	cout << endl;

	double shelfArea = shelfWidth * shelfHeight;
	cout << "The area of your bookshelf is " << shelfArea << " feet ";
	cout << endl;

	double paintCost = (roomLength * roomHeight) * 2 + (roomWidth * roomHeight) * 2 * paintPrice;
	cout << "The total cost of painting the walls is $" << paintCost;
	cout << endl;

	double carpetCost = roomLength * roomWidth * carpetPrice;
	cout << "The total cost of installing the carpet is $" << carpetCost;
	cout << endl;

	double finalCost = paintCost + carpetCost;
	cout << "the total cost of the carpet and paint will be $" << finalCost;
	cout << endl;

	return 0;
}

/*Enter the length of your room 12

Enter the width of your room  12

Enter the height of your room 8

Enter the width of your door 4

Enter the height of your door 7

Enter the width of your first window 3

Enter the height of your first window 4

Enter the width of your second window 4

Enter the height of your second window 4

Enter the width of your bookshelf 6

Enter the height of your bookshelf 5

Enter the price of paint per square foot 1.75

Enter the price of carpet per square yard 11.00

The room's dimensions is 1152 feet
The area of your door is 28 feet
The area of your first window is 12 feet
The area of your second window is 16 feet
The area of your bookshelf is 30 feet
The total cost of painting the walls is $528
The total cost of installing the carpet is $1584
the total cost of the carpet and paint will be $2112
Press any key to continue . . .*/

/*Enter the length of your room 14.5

Enter the width of your room  10.75

Enter the height of your room 9.25

Enter the width of your door 3.7

Enter the height of your door 6.75

Enter the width of your first window 2.75

Enter the height of your first window 3.0

Enter the width of your second window 3.25

Enter the height of your second window 3.0

Enter the width of your bookshelf 4.5

Enter the height of your bookshelf 8.0

Enter the price of paint per square foot 2.35

Enter the price of carpet per square yard 26.80

The room's dimensions is 1441.84 feet
The area of your door is 24.975 feet
The area of your first window is 8.25 feet
The area of your second window is 9.75 feet
The area of your bookshelf is 36 feet
The total cost of painting the walls is $735.606
The total cost of installing the carpet is $4177.45
the total cost of the carpet and paint will be $4913.06
Press any key to continue . . .*/