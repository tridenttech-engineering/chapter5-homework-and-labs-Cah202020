//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

//delcare variables
  double item1 = 0.0;
	double item2 = 0.0;
	const double DISC_RATE = 0.5;
	double total = 0.0;

	//enter data
	cout << "Enter price of item 1: $";
	cin >> item1,
	cout << "Enter price of item 2: $";
	cin >> item2;

	//determine which item is cheaper
	if (item1 > item2) {
	double temp = item1;
		temp = item1;
		item1 = item2;
		item2 = temp;
	}
	//end if

	//calculate total
	total = (item1 * DISC_RATE) + item2;
	cout << fixed << setprecision(2);
	cout << "Total owed: $" << total << endl;
	
	return 0;
}	//end of main function