// Age calculator

#include <iostream>
using namespace std;
// function to calculate current age
void findAge(int cd, int cm, int cy, int bd, int bm, int by)
{
	// days of every month
	int month[] = { 31, 28, 31, 30, 31, 30, 31,
						31, 30, 31, 30, 31 };

	// if birth date is greater then current birth
	if (bd > cd) {
		cd = cd + month[bm - 1];
		cm = cm - 1;
	}

	// if birth month exceeds current month
	if (bm > cm) {
		cy = cy - 1;
		cm = cm + 12;
	}

	// calculate date, month, year
	int calculated_date = cd - bd;
	int calculated_month = cm - bm;
	int calculated_year = cy - by;

	// print the present age
    cout << "Present Age: \n";
    cout << "Years: " << calculated_year << "   Months: " << calculated_month << "   Days: " << calculated_date << "\n";
}

// funtion to calculate leap years
int leap_year(int y1, int y2)
{
    int c=0;
    for(int i=y1;i<=y2;i++)
        if(i%4==0)
            c++;
    return c;
}

// driver code to check the above function
int main()
{
	// current dd// mm/yyyy
	int cd, cm, cy;
	cout << "Enter present date in YYYY MM DD format: ";
    cin >> cy >> cm >> cd;

	// birth dd// mm// yyyy
	int bd, bm, by;
	cout << "Enter birth date in YYYY MM DD format: ";
    cin >> by >> bm >> bd;

	// function call to print age
	findAge(cd, cm, cy, bd, bm, by);

    // function call of leap year count
    cout << "Leap years passed since your birth are: " << leap_year(by,cy);
	return 0;
}
