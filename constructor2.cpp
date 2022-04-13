#include <iostream>
using namespace std;
class Demo
{
    private:
        int num1, num2;
    public:
        Demo()
        {
            num1=10;
            num2=20;
        }

    void display()
    {
        cout << "num1=" << num1 << endl;
        cout << "num2=" << num2 << endl;
    }
};
int main()
{
    Demo obj;
    obj.display();
    return 0;
}