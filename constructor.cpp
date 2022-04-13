#include <iostream>
using namespace std;
class Cube
{
    public:
        int side;
    public:
        Cube()
        {
            side=10;
        }
};
int main()
{
    Cube c;
    cout << "Value is: " << c.side;
}