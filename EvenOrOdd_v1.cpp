// program to check whether a number is even or odd with do while
#include <iostream>
using namespace std;

int main()
{
    int x;
    char ch;
    do
    {
        cout << "Enter a number =";
        cin >> x;
        if (x % 2 == 0)
        {
            cout << "\nNumber is even";
        }
        else
        {
            cout << "\nNumber is odd";
        }

        cout << "\nWant to Enter another number? (Y/N)";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    return 0;
}