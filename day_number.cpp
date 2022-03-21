#include <iostream>
using namespace std;
 
int main() 
{
    cout << "---Assuming Day 1 is Monday--- \n";
    int d;
    cout << "Enter Day Number: ";
    cin >> d;
    int r=d%7;
    if (r==0)
    {
        cout << "Sunday";
    }
    else if (r==1)
    {
        cout << "Monday";
    }
    else if (r==2)
    {
        cout << "Tuesday";
    }
    else if (r==3)
    {
        cout << "Wednesday";
    }
    else if (r==4)
    {
        cout << "Thursday";
    }
    else if (r==5)
    {
        cout << "Friday";
    }
    else
    {
        cout << "Saturday";
    }
}