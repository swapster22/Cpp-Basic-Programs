// program to print multiplication table of any positive integer
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive integer =>";
    cin>>x;

    if(x>0)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<x<<" x "<<i<<" = "<<(x*i)<<endl;
        }
    }

    return 0;

}