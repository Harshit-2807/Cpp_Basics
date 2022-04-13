#include <iostream>
using namespace std;
class Demo
{
    private:
        int l, b;
    public:
        Demo()
        {
            l=10;
            b=20;
        }

    void Area()
    {
        int area=l*b;
        cout << "Area is: " << area;
    }
};
int main()
{
    Demo obj;
    obj.Area();
    return 0;
}