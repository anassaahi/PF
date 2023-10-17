#include <iostream>
using namespace std;
main()
{
cout << "Enter the size in megabytes (MB): ";
int size;
cin >> size;
float kps = 1024;
int bytes = 1024;
int bitss = 8;
float bits;
bits = size * kps * bytes * bitss ;
cout <<size<<" MB is equivalent to "<< bits <<" bits.";






}