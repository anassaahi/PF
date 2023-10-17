#include <iostream>
using namespace std;
main()
{	
	cout << "Enter weight in pounds: ";
	int pounds;
	cin >> pounds;
	float ratio;
	ratio = 0.45;
	float kg;
	kg = pounds * ratio;
	cout <<pounds<<" pounds is equal to "<<kg<<" kilograms.";
	
}