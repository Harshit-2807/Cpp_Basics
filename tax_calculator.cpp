// Program to calculate tax

#include <iostream>
using namespace std;

int taxCalculator(int gsal, int tsav)
{
    int tax;
    if(tsav>=100000)
        gsal-=100000;
    else
        gsal-=tsav;
    if(gsal<=100000)
        tax=0;
    else if(gsal>100000 and gsal<=200000)
        tax=(gsal-100000)*0.1;
    else if(gsal>200000 and gsal<=500000)
        tax=(gsal-200000)*0.2+(10000);
    else
        tax=(gsal-500000)*0.3+60000+10000;
    return tax;
}

int main()
{
    int sav, sal;
    cout << "Enter your gross salary: ";
    cin >> sal;
    cout << "Enter your total savings: ";
    cin >> sav;
    cout << "Your tax amount is: " << taxCalculator(sal, sav);
    return 0;
}