#include <iostream>
using namespace std;
int main()
{
    int var;
    cout << "Enter value of var: ";
    cin >> var;
    int *ptr;
    int **mptr;
    ptr=&var;
    mptr=&ptr;
    cout << "Value of var: " << var << "\n";
    cout << "Value of ptr: " << ptr << "\n";
    cout << "Value of mptr: " << mptr << "\n";
    cout << "Value of *ptr: " << *ptr << "\n";
    cout << "Value of **mptr: " << **mptr << "\n";
    return 0;
}