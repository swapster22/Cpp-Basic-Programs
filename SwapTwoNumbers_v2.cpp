//Swaping Two Numbers without third variable use
#include<iostream>
using namespace std;

int main(){
    int x=10,y=8;

    cout<<"First number is="<<x<<" and Second number is="<<y;
    cout<<"\nNumbers after swapping";
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"\nFirst number is="<<x<<" and Second number is="<<y;
    return 0;
}