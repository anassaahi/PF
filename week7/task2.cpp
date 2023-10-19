#include<iostream>
using namespace std;
void generateFibonacci(int length);
main(){
    int length;
    cout <<"Enter the length of the Fibonacci series: ";
    cin >> length;
    
generateFibonacci(length);
}
void generateFibonacci(int length)
{
    int n1 = 0;
    int n2 = 1;
    int next;
    int x;
    if (length >= 1)
       {
        cout <<n1;
       }
       if (length >= 2)
       {
        cout <<", "<<n2;
       }
    
    for (x = 3;x <= length;++x)
       {
       
        next = n1+n2;
        cout <<", "<<next;
        n1 = n2;
        n2 = next;
       }
    
}