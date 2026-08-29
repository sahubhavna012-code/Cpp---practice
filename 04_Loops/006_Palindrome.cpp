#include<iostream>
using namespace std;
int main()
{
    int n;
    int original,reversed=0,remainder;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }
    if (original==reversed)
    {
        cout<<original<<"  is a palindrone"<<endl;
    }
    else
    {
        cout<<original<<"  is not a palindrone"<<endl;
    }
}