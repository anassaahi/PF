#include<iostream>
#include<iomanip>
using namespace std;
main(){
    int numCount;
    int num;
    float p1 = 0,p2 = 0,p3 =0,p4 =0 ,p5 = 0;
    float c1,c2,c3,c4,c5;
    cout << "Enter numbers count: ";
    cin  >> numCount;
    for(int x = 1; x <= numCount;x++){
        cout << "Enter a number: ";
        cin  >> num;
        if(num < 200)
            p1++;
        else if(num < 400)
            p2++;
        else if(num < 600)
            p3++;
        else if(num < 800)
            p4++;
        else 
            p5++;
    }
    float total = numCount;
    c1 = (p1/total)*100;
    c2 = (p2/total)*100;
    c3 = (p3/total)*100;
    c4 = (p4/total)*100;
    c5 = (p5/total)*100;
  
    cout << fixed << setprecision(2);
    cout << c1 << "%\n";
    cout << c2 << "%\n";
    cout << c3 << "%\n";
    cout << c4 << "%\n";
    cout << c5 << "%\n";
}