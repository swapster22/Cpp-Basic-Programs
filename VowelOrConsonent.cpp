// program to check whether a character is vowel or consonent
#include<iostream>
using namespace std;

int main(){
    char ch;
    bool isVowel=false;
    char vowels[5]={'a','e','i','o','u'};

    cout<<"Enter a character=";
    cin>>ch;

    for(int i=0;i<sizeof(vowels)/sizeof(vowels[0]);i++)
    {
        if(tolower(ch) == vowels[i])
        {
            isVowel=true;
            break;
        }
    }

    if(isVowel)
    {
        cout<<"Its a vowel!";
    }
    else
    {
        cout<<"Its a consonent!";
    }

    return 0;
    
}