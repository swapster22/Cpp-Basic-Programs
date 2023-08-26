// program to print fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c, n = 0;

    while (n < 10)
    {
        if (n == 0)
        {
            cout << a;
        }
        else if (n == 1)
        {
            cout << " " << b;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
            cout << " " << c;
        }
        n++;
    }
    return 0;
}