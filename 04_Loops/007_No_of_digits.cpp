#include<iostream>
using namespace std;
int main()
{
    int n,num=0;
    cout<< "Enter a number: "<<endl;
    cin>> n;
    cout<<"Number of digits in " <<n <<" is: "<<endl;
    if (n==0)
    {
        num=1;
    }
    else
    {
        while(n!=0)
        {
            n/=10;
            num++;
        }
    }

    cout<<num;
    return 0;
}