#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    if((a>='a' and a<='z') or (a>='A' and a<='Z'))
        cout<<"Given character is an Alphabet.";
    else if(a>='0' and a<='9' )
        cout<<"Given character is a Digit.";
    else
        cout<<"Given character is a Special Character.";
}