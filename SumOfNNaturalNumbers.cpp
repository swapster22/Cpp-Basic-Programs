// program to calculate the sum of n naturnal numbers
#include<iostream>
using namespace std;

int main()
{
    int x,sum;
    cout<<"Enter a positive integer";
    cin>>x;

    for(int i=1;i<=x;i++)
    {
        sum+=i;
    }

    cout<<"Sum of numbers is => "<<sum;
    return 0;
}