#include <iostream>
using namespace std;

int main()
{ 
    int p;
    cout<<"Enter your marks: ";
    cin>>p;
    
    if(p<=10 and p>=9)
    {
        cout<<"A+";
    }
    else if(p<9 and p>=8 )
    {
        cout<<"A";
    }

     else if(p<8 and p>=7)
    {
        cout<<"B+";
   
    }
     else if(p<7 and p>=6)
    {
        cout<<"B";
   
    }
     else if(p<6 and p>=5)
    {
        cout<<"C";
   
    }
     else if(p<5 and p>=4)
    {
        cout<<"D";
   
    }
   else
   {
        cout << "failed";
    }
}