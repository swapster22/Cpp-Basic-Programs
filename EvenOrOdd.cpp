// program to check whether a number is even or odd
#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number =";
    cin>>x;

    if(x%2==0)
    {
        cout<<"\nNumber is even";
    }
    else
    {
        cout<<"\nNumber is odd";
    }

    return 0;
}