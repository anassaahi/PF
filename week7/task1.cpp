#include<iostream>
using namespace std;
void printTable(int number);
main(){
    int number;
    cout <<"Enter a number: ";
    cin >> number;
   printTable(number);
}    
void printTable(int number) 
{   for (int x= 1;x <= 10;x = x+1)
{   int pro;
    pro = number * x;
    cout <<number<<" X "<<x<<" = "<<pro<<endl;
}}  
    
    
