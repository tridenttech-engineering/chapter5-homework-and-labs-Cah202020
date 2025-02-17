//lab5-2.cpp - displays the total amount due
//Created/revised by Christopher Hall on 2/16/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//declare variables
	double amtOwed = 0.0;
	const double SHIP_RATE1 = 0.99;
	const double SHIP_RATE2 = 4.99;
	const double DISSCOUNT_RATE = 0.10;
  char member = ' ';

	//enter values
	cout << "Enter amount owed before discount and shipping: ";
	cin >> amtOwed;
	cout << "Are you a member? (Y/N) ";
	cin >> member;

	//calculate total
	if (toupper(member) == 'Y') 
		amtOwed -= amtOwed * DISSCOUNT_RATE;
	//end if

	if (amtOwed >= 100.0) 
		amtOwed += SHIP_RATE1;
	else
		amtOwed += SHIP_RATE2;
	//end if

	//display total
	cout << fixed << setprecision(2);
	cout << "Total amount owed: $" << amtOwed << endl;
	
	return 0;
}	//end of main function