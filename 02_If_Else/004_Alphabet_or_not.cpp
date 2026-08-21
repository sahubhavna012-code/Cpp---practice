#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"Enter a character: ";
    cin>>n;
    if(n>='A' && n<='Z' || n>='a' && n<='z')
    {
        cout<<n <<" is an alphabet";
    }
    else
    {
        cout<<n <<" is not an alphabet";
    }
}