#include <iostream>
using namespace std;
main()
{
cout << "Enter the name of the cricket team: ";
string name;
cin >> name;
cout << "Enter the number of wins: ";
int wins;
cin >> wins;
cout << "Enter the number of draws: ";
int draws;
cin >> draws;
cout << "Enter the number of losses: ";
int losses;
cin >> losses;
int score;
score = (wins*3)+(draws*1);
cout <<name<<" has obtained "<<score<<" points in the Asia Cup tournament.";







}