#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int base=3;
    for(int i=1; i<=3; i++)
    {
        int result= round(pow(base,i));
        cout<< " "<<result;
    }
}