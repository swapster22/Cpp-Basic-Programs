// program to find the factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int x;
    long factorial = 1.0;

    cout << "Enter a number => ";
    cin >> x;

    if (x < 0)
    {
        cout << "Factorial of a negative number doesn't exists";
    }
    else
    {
        for (int i = x; i > 0; i--)
        {
            factorial *= i;
        }
        cout << "The factorial of a given number is => " << factorial;
    }

    return 0;
}