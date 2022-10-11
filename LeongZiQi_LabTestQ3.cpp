#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double cost, maxloan, profee;			// prop cost, max loan, processing fee
	cout << setprecision(2) << fixed;		// output 2dp price
	
	// infinite loop while cost invalid
	do{
		cout << "Please input the cost of the property" << endl;
		cin >> cost;
		
		if(cost < 0)
			cout << "Invalid cost. Please try again.\n" << endl;
	}
	while(cost < 0);
	
	// calc max loan
	maxloan = cost * 0.8;
	// calc processing fee based on loan amount
	profee = maxloan * 0.005;
	
	// output max loan and processing fee
	cout << "\nThe maximum home-loan amount: $" << maxloan << endl;
	cout << "The corresponding processing fee: $" << profee << endl;
	
	return 0;

}
