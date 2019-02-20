/*
			Author: Jacob Morones
			Class: Computer Programming I
			Description: This program will calculate volume of rectangles and circles, and will calculate volume of a cylinder
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.1419;

double rectangle(double, double);
double circle(double);
double cylinder(double, double);

int main()
{
	double radius = 0;
	double height = 0;
	int choice = 0;
	double length = 0;
	double width = 0;

	cout << fixed << showpoint << setprecision(2) << endl;

	cout << "This program can calculate the area of a rectangle, "
		<< "the area of a circle, or volume of a cylinder." << endl;
	cout << "To run the program enter: " << endl;
	cout << "1: To find the area of rectangle." << endl;
	cout << "2: To find the area of a circle." << endl;
	cout << "3: To find the volume of a cylinder." << endl;
	cout << "-1: To terminate the program." << endl;
	cin >> choice;
	cout << endl;


	while (choice < 4)
	{



		switch (choice)
		{

		case -1:
			cout << "Program terminated.";
			choice = 100;
			break;

		case 1:
			cout << "Enter the length and the width " << "of the rectangle: ";
			cin >> length >> width;
			cout << endl;
			cout << "Volume = " << rectangle(length, width) << endl;
			cout << endl << "Enter your next choice: ";
			cin >> choice;
			cout << endl;
			break;

		case 2:

			cout << "Enter the radius of the circle: ";
			cin >> radius;
			cout << endl;
			cout << "Area = " << circle(radius) << endl;
			cout << endl << "Enter your next choice: ";
			cin >> choice;
			cout << endl;
			break;


		case 3:
			cout << "Enter the radius of the base and the " << "height of the cylinder: ";
			cin >> radius >> height;
			cout << endl;
			cout << "Area = " << cylinder(radius, height) << endl;
			cout << endl <<"Enter your next choice: ";
			cin >> choice;
			cout << endl;
			break;



		default:
			cout << "Invalid choice!" << endl;
			break;
		}

	}

	return 0;
}


double rectangle(double length, double width)
{
	return length * width;
}

double circle(double radius)
{
	return PI * pow(radius, 2.0);
}

double cylinder(double radius, double height)
{
	return PI * (radius * radius) * height;
}

/*
This program can calculate the area of a rectangle, the area of a circle, or volume of a cylinder.
To run the program enter:
1: To find the area of rectangle.
2: To find the area of a circle.
3: To find the volume of a cylinder.
-1: To terminate the program.
1

Enter the length and the width of the rectangle: 5 6

Volume = 30.00

Enter your next choice: 2

Enter the radius of the circle: 5

Area = 78.55

Enter your next choice: 3

Enter the radius of the base and the height of the cylinder: 5 6

Area = 471.28

Enter your next choice: -1

Program terminated.
Press any key to close this window . . .
*/