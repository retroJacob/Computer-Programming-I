
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double cost;
	double area;

	double bagSize;

	cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
	cin >> bagSize;
	cout << endl;

	cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
	cin >> cost;
	cout << endl;

	cout << "Enter the area, in square feet, that can be fertilized by one bag: ";
	cin >> area;
	cout << endl;

	cout << "The cost of the fertilizer per pound is: " << cost / bagSize << endl;
	cout << "The cost of fertilizing per square foot is: " << cost/ area << endl;

	return 0;
}
/*Enter the amount of fertilizer, in pounds, in one bag: 10

Enter the cost of the 10 pound fertilizer bag: 20

Enter the area, in square feet, that can be fertilized by one bag: 100

The cost of the fertilizer per pound is: 2
The cost of fertilizing per square foot is: 0.2
Press any key to continue . . .*/

/*Enter the amount of fertilizer, in pounds, in one bag: 15

Enter the cost of the 15 pound fertilizer bag: 35.00

Enter the area, in square feet, that can be fertilized by one bag: 250

The cost of the fertilizer per pound is: 2.33333
The cost of fertilizing per square foot is: 0.14
Press any key to continue . . .*/
