#include <iostream>
using namespace std;
main()
{
cout << "Enter the number of hours: ";
int hours;
cin >> hours;
int mins = 60;
int secs = 60;
int time;
time = hours * mins * secs ;
cout <<hours<<" hours is equivalent to "<<time<<" seconds.";






}