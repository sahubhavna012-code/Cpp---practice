#include<iostream>
using namespace std;
void area(float r)
{
    float area= 3.14*r*r;
    cout<<"Area of circle: "<<area<<endl;
}
int main()
{
    float r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    area(r);
}