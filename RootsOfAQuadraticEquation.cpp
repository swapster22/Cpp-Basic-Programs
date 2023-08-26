// program to find roots of a quadratic equations
#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,discriminant,roots;
    cout<<"Enter three Coefficients:- ";
    cin>>a>>b>>c;

    // let's calculate the discriminant
    discriminant=b*b - 4*a*c;

    if(discriminant>0)
    {
        cout<<"The roots are real and different"<<endl;
        cout<<"x1 => "<<(-b + sqrt(discriminant))/(2*a)<<endl;
        cout<<"x2 => "<<(-b - sqrt(discriminant))/(2*a)<<endl;
    }
    else if(discriminant==0)
    {
        cout<<"The roots are real and equal"<<endl;
        cout<<"x1 => "<<(-b)/(2*a)<<endl;
        cout<<"x2 => "<<(-b)/(2*a)<<endl;
    }
    else
    {
        cout<<"The roots are complex and different"<<endl;
        cout<<"x1 => "<<(-b/(2*a))<<" + i"<<(sqrt(discriminant))/(2*a)<<endl;
        cout<<"x2 => "<<(-b/(2*a))<<" - i"<<(sqrt(discriminant))/(2*a)<<endl;
    }
    return 0;
}