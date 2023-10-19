#include <iostream>
using namespace std;
int calculateMoney(int age, int Price, int toyPrice);
main() {
    int age;
    cout<<"Enter Lilly's age: ";
    cin >> age;
    int Price;
    cout <<"Enter the price of the washing machine: ";
    cin >> Price;
    int toyPrice;
    cout <<"Enter the unit price of each toy: ";
    cin >> toyPrice;
    int result = calculateMoney(age, Price, toyPrice);
    if (result >= Price) {
        int remainingMoney = result - Price;
        cout << "Yes! " <<endl<< remainingMoney;
    }if (result <= Price){
        int less = Price - result;
        cout << "No! " <<endl<< less;
    }
}
int calculateMoney(int age, int Price, int toyPrice) {
    int Money = 0;
    int toymoney = 0;
    int agee = 1;
    int dollars = 10;
    while (agee <= age ){
       if (agee%2 == 0){
        Money += dollars;
        dollars+=10;
        Money--;
        }
    else{
        toymoney += toyPrice;
    }
    agee++;
    }int totalmoney = Money + toymoney;
    if (age%2 == 1){
        totalmoney-= toyPrice;
    }
    
    return totalmoney;
}