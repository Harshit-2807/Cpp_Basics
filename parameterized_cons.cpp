#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int len, bre;
    public:
        Rectangle(int a, int b)
        {
            len=a;
            bre=b;
        }

    void Area()
    {
        int area=len*bre;
        cout << "Area is: " << area;
    }
};
int main()
{
    Rectangle obj(4,5);
    obj.Area();
    return 0;
}