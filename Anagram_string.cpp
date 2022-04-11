/* Check whether the two given strings are anagram or not. */

#include <iostream>
using namespace std;

int anagram(string s1, string s2)
{
    int a=1,b=1;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2)
        return false;
    for(int i=0;i<l1;i++)
    {
        a*=int(s1[i]);
        b*=int(s2[i]);
    }
    if(a==b)
        return true;
    else
        return false;
}

int main()
{
    string s1, s2;
    cout << "Input first string: ";
    cin >> s1;
    cout << "Input second string: ";
    cin >> s2;
    int a=anagram(s1,s2);
    if(a==1)
        cout << "Anagram String";
    else
        cout << "Not Anagram String";
    return 0;
}