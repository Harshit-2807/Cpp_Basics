
#include <iostream>
using namespace std;
class MySecondClass
{
    public:
        void Method();
};

void MySecondClass::Method()
{
    cout << "Using methods with Classes😁";
}

int main()
{
    MySecondClass myObj;
    myObj.Method();
    return 0;
}
