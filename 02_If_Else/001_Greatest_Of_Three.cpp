#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< "Enter three numbers: "<< endl;
    cin>> a>> b>> c;
    if( a>b and a>c)
    {
        cout<< "a is greatest";
    }
    else if(b>a and b>c)
    {
        cout<< "b is greatest";
    }
    else
    {
        cout<< "c is largest";
    }
}
