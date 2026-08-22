#include<iostream>
using namespace std;
bool isLeapYear(int year)
{
    if(year%4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isValidDate(int d,int m,int y)
{
    if(m<1 || m>12)
    {
        return false;
    }
    else if(d<1 || d>31)
    {
        return false;           
    }
    else if(m==2)
    {
        if(isLeapYear(y))
        {
            if(d>29)
            {
                return false;
            }
        }
        else
        {
            if(d>28)
            {
                return false;
            }
        }

    }
    return true;
}
int main()
{
    isValidDate(23,3,2004);
    cout<<isValidDate(23,3,2004)<<endl;
}