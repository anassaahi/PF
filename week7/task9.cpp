#include<iostream>
using namespace std;
int calculatePrice(int money,int year);
main(){
    int money;
    cout <<"Enter Money: ";
    cin >> money;
    int year;
    cout << "Enter Year: ";
    cin >> year; 
    int total = calculatePrice(money,year);
    if (total <= money ){
        int pos = money- total;
        cout <<"Yes! He will live a carefree life and will have "<<pos<<" dollars left.";
    }
    if (total > money){
        int neg = total - money;
        cout <<"He will need "<<neg<<" dollars to survive.";
    }
   
}
int calculatePrice(int money,int year){
    int ex = 0;
    int ov = 0;
    int age = 18;
    int cryear  = 1800;
    while(cryear <= year){
        if(cryear%2==0){
           ex += 12000; 
        }
        else{
            ov +=  12000+50*age;
        }
        age++;
        cryear++;
    }
   int total = ex + ov;
    return total;

    
}