#include<iostream>
using namespace std;
void si(float p,float r,float t)
{
    float si=(p*r*t)/100;
    cout<<"Simple interest is: "<<si <<endl;
}
int main()
{
    float p,r,t;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time in years: ";
    cin>>t;
    si(p,r,t);
    return 0;
}