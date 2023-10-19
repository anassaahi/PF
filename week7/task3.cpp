#include <iostream>
using namespace std;
int totalDigits(int number); 
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = totalDigits(number);
    cout << "Total number of digits: " <<result<<endl;
    
}
int totalDigits(int number) {
    int count = 0;
    if (number < 0) {
        number = -number;
        number /=10;
        count = count +1;
    }
    
    
    while (number > 0) {
        number /= 10;
        count = count +1;
    }

    return count;
}