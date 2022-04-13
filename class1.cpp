#include <iostream>
using namespace std;
class FirstClass
{
    public:
        int var;
};

int main()
{
    FirstClass obj;
    obj.var=10;
    cout << obj.var;
    return 0;
}