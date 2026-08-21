#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<< "Enter a character: ";
    cin>> n;
    if(n>='A' && n<='Z')
    {
        cout<< "The character is in uppercase"<<endl;
    }
    else if(n>='a' && n<='z')
    {
        cout<< "The character is in lowercase"<<endl;
    }
    else
    {
        cout<< "The character is a special character"<<endl;
    }
}