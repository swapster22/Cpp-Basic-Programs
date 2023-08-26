// Swaping numbers with use of third variable
#include<iostream>
using namespace std;

int main(){
    int x=8,y=10;
    cout<<"Number one="<<x;
    cout<<"\nNumber two="<<y;
    cout<<"\nNumbers after swapping";
    int temp=x;
    x=y;
    y=temp;
    cout<<"\nNumber one="<<x;
    cout<<"\nNumber two="<<y;
    return 0;
}