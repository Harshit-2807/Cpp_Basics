#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    int (*p)[5];
    ptr=arr;
    p=&arr;
    cout << "First element in array: " << *p << "\n";
    p++;
    cout << "next element in array: " << *p << "\n";
    p+=1;
    cout << "next element in array: " << *p << "\n";
    p--;
    cout << "next element in array: " << *p << "\n";
    p-=1;
    cout << "next element in array: " << *p << "\n";
    return 0;
}