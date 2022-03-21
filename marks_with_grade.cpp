#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e = 0;

	cout << " Enter your physics marks: ";
    cin >> a;
	cout << " Enter your chemistry marks: ";
    cin >> b;
	cout << " Enter your biology marks: ";
    cin >> c;
	cout << " Enter your mathematics marks: ";
    cin >> d;
	cout << " Enter your computer marks: ";
    cin >> e;

    int per = (a+b+c+d+e) / 5;
    cout << "Percentage: " << per <<"%"<< endl;

    if(per >= 90 && per <= 100)
        cout << "Grade: A\n";
    else if(per >= 80 && per < 90)
        cout << "Grade: B\n";
    else if(per >= 70 && per < 80)
        cout << "Grade: C\n";
    else if(per >= 60 && per < 70)
        cout << "Grade: D\n";
    else if(per >= 40 && per < 60)
        cout << "Grade: E\n";
    else if(per >= 0 and per < 40)
        cout << "Grade: F\n";
    else
        cout << "False input";
    return 0;
}