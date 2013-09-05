// This program is going to seperate a certain amount of money into quarters, nickels and pennies

#include <iostream>
using namespace std;
int main()
{
	double amount;      // amount of money to come up with (input)
	int quarters;       // number of quarters required
	int dimes;          // number of dimes required
	int nickels;        // number of nickels required
	int pennies;        // number of pennies required
	double totalCents;  // converts the initial amount of money into cents
	int total_1;        // total amount of money left after first calculation
	int total_2;        // total amount of money left after second calculation
	int total_3;        // total amount of money left after third calculation

	cout << "Please enter the money you want (Indicate cents with a decimal. Ex. 41 cents is 0.41): ";
	cin >> amount; // input the desired total with decimal places to indicate cents (Ex. 41 cents should be .41)

	//calculations
	totalCents = (amount * 100);
	quarters = (totalCents / 25);
	total_1 = (totalCents - (quarters * 25));
	dimes = (total_1 / 10)
	total_2 = (total_1 - (dimes * 10))
	nickels = (total_2 / 5);
	total_3 = (total_2 - (nickels * 5));
	pennies = total_3;

	//output results
	cout << "Monetary breakdown into change" << endl
		 << "Quarters: " << quarters << endl
		 << "Dimes: " << dimes << endl
		 << "Nickels: " << nickels << endl
		 << "Pennies: " << pennies << endl;

	return 0;
}
