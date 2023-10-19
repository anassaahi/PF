#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main(){
    int number;
    cout <<"Enter a number: ";
    cin >> number;
    int digit;
    cout <<"Enter the digit to check: ";
    cin >> digit;
int result = frequencyChecker(number, digit);
cout <<"Frequency: "<<result;
}
int frequencyChecker(int number, int digit)
{int freq = 0;
    while(number != 0){
        int lastdigit = number%10;
        if (lastdigit == digit){
            freq= freq+1;
        }
        number /=10;
    }return freq;
}