// program to check whether a year is a leap year or not
#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter year =>";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "It's a Leap Year!";
    }
    else if (year % 100 == 0)
    {
        cout << "It's not a Leap Year";
    }
    else if (year % 4 == 0)
    {
        cout << "It's a leap year!";
    }
    else
    {
        cout << "It's not a Leap Year";
    }

    return 0;
}