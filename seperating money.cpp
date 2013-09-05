// This program is going to seperate a certain amount of money into quarters, nickels and pennies

#include <iostream>
using namespace std;
int main()
{
	double amount;      // amount of money to come up with (input)
	int quarters;       // number of quarters required
	int nickels;        // number of nickels required
	int pennies;        // number of pennies required
	double totalCents;  // converts the initial amount of money into cents
	int total_1;        // total number of money left after first calculation
	int total_2;        // total number of money left after second calculation

	cout << "Please enter the money you want: ";
	cin >> amount; // input the desired total with decimal places to indicate cents (Ex. 41 cents should be .41)

	//calculations
	totalCents = (amount * 100);
	quarters = (totalCents / 25);
	total_1 = (totalCents - (quarters * 25));
	nickels = (total_1 / 5);
	total_2 = (total_1 - (nickels * 5));
	pennies = total_2;

	//output results
	cout << "Monetary breakdown into change" << endl
		 << "Quarters: " << quarters << endl
		 << "Nickels: " << nickels << endl
		 << "Pennies: " << pennies << endl;

	return 0;
}