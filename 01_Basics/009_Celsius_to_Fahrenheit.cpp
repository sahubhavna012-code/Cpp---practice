#include<iostream>
using namespace std;
void Fahrenheit(float c)
{
    float f=(c*9/5)+32;
    cout<<"Temperature in Fahrenheit is: "<<f <<endl;
}
int main()
{
    float c;
    cout<<"Enter temperature in Celsius: ";
    cin>>c;
    Fahrenheit(c);
    return 0;
}