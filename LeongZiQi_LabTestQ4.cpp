#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	char p;    							// package
	int month, mins, totmins;			// month, minutes, total minutes per month
	double price, total;				// package price, total price
	cout << setprecision(2) << fixed;	// output price in 2dp
	
	// display packages	
	cout << "Package A. For $39.99 per month 450 minutes are provided. "
		 << "Additional minutes are $0.45 per minute." << endl;
	cout << "Package B. For $59.99 per month 900 minutes are provided. "
		 << "Additional minutes are $0.40 per minute." << endl;	 
	cout << "Package C. For $69.99 per month unlimited minutes provided. " << endl;	
	
	// infinite loop while month is invalid
	do{
		cout << "\nPlease input the current month: " << endl;
		cin >> month;
		
		if(month < 1 || month > 12)
			cout << "Invalid month. Please try again.";
	}
	while(month < 1 || month > 12);
	
	// infinite loop while not A, B or C
	do{
		cout << "\nWhich package had you purchased?" << endl;
		cin >> p;
		
		if(p != 'A' && p != 'B' && p != 'C')
			cout << "Invalid input. Please try again.\n" << endl;
	}
	while(p != 'A' && p != 'B' && p != 'C');
	
	// infinite loop while minutes < 0
	do{
		cout << "\nHow many minutes did you used in this month?" << endl;
		cin >> mins;
		
		// calc total mins
		if(month == 2)
			totmins = 672 * 60;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			totmins = 720 * 60;
		else
			totmins = 744 * 60;
		
		if(mins < 0 || mins > totmins)
			cout << "Invalid input. Please try again.\n" << endl;
	}
	while(mins < 0 || mins > totmins);
	
	// package selection
	if(p == 'A')
		price = 39.99;
	else if (p == 'B')
		price = 59.99;
	else
		price = 69.99;
		
	// conditional calculation
	switch(p)
		{
			case 'A':	if(mins > 450)
							total = ((mins - 450) * 0.45);
						break;
			case 'B':	if(mins > 900)
							total = ((mins - 900) * 0.4);
						break;
			case 'C':	price = price;
						break;
		}
	
	// grand total
	total = total + price;
	
	cout << "\nThe total amount of your monthly bill is: $" << total << endl;
	
	return 0;
	
}
