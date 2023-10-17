#include <iostream>
using namespace std;
main()
{	
cout <<"Enter the student's name: ";
string name;
cin >> name;
cout <<"Enter matriculation marks (out of 1100): ";
int matric;
cin >> matric;
cout <<"Enter intermediate marks (out of 550): ";
int inter;
cin >> inter;
cout <<"Enter Ecat marks (out of 400): ";
float ecat;
cin >> ecat;
float aggregate;
aggregate = (ecat*0.5/400) + (matric*0.1/1100) + (inter*0.4/550);
float finalagg;
finalagg = aggregate * 100;
cout << "Aggregate score for "<<name<<" in UET is: "<<finalagg<<"%"; 

}



