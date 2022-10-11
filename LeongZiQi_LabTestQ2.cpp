#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	double shares = 750;
	double price = 35;
	double commision = 0.02;			// 2% commision
	double total, com, grandtotal;		// total, commision amount, grand total
	cout << setprecision(2) << fixed;	// output 2dp price	
	
	total = shares * price;						// without commision
	com = total * commision;					// commision amount
	grandtotal = total + (com);					// with commision
	
	// output
	cout << "The amount paid for the stock alone (without commision): $" << total << endl;
	cout << "\nThe amount of the commision: $" << com << endl;
	cout << "\nThe total amount paid (stock + commision): $" << grandtotal;

	return 0;
	
}
