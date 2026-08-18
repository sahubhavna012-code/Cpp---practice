#include<iostream>
using namespace std;
int getGCD(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int getLCM(int a,int b)
{
    if(a==0 || b==0) return 0;
    return (a/getGCD(a,b))*b;
}
int main()
{
    int a=12,b=18;
    cout << "LCM of " << a << " and "<<b << " is: "<< getLCM(a,b)<< endl;
    return 0;
}