#include <iostream>
using namespace std;
main()
{
cout << "Enter the current world population: ";
int current;
cin >> current;
cout << "Enter the monthly birth rate (number of births per month): ";
int birthrate;
cin >> birthrate;
int future;
future = current + (birthrate*360);
cout << "The population in three decades will be: "<<future;






}