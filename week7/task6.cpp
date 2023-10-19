#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2,int gcd);
main(){
    int number1;
    int gcd;
    cout <<"Enter the first number: ";
    cin >> number1;
    int number2;
    cout << "Enter the second number: ";
    cin>> number2;
int result1 = calculateGCD(number1, number2);
cout <<"GCD: "<<result1<<endl;
int result2 = calculateLCM( number1, number2, gcd);
cout <<"LCM: "<<result2;
}
int calculateGCD(int number1, int number2){

    while(number2 !=0){
        int x = number2;
        number2 = number1 % number2;
        number1 = x;
    }return number1;
}
int calculateLCM(int number1, int number2,int gcd){
    gcd = calculateGCD(number1, number2);
    int lcm = (number1*number2)/gcd;
    return lcm;

}
