#include<iostream>
using namespace std;
int findGCD(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int a,b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout<< "GCD is: " <<findGCD(a,b) << endl;
    return 0;
}