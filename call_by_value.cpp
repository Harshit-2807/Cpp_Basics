// example of call by value

#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int x=20;
    int y=26;
    swap(x, y);
    cout << "Values after swap:  x=" << x << "   y=" << y;
    return 0;
}