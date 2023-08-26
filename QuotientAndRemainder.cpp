#include<iostream>
using namespace std;

int main(){
    int Quotient,Remainder,Divisor,Dividend;

    cout<<"Enter Divisor";
    cin>>Divisor;
    cout<<"Enter Dividend";
    cin>>Dividend;

    Quotient=Divisor/Dividend;
    Remainder=Divisor%Dividend;

    cout<<"Quotient of the number is = "<<Quotient<<" and Remainder is = "<<Remainder;

    return 0;
}