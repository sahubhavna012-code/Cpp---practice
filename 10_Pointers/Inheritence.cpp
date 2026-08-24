#include<iostream>
using namespace std;
class Base
{
    public:
    void showBase()
    {
        cout<<"Base class"<<endl;
    }
};
class Derived:public Base
{
    public:
    void showDerived()
    {
        cout<<"Derived class"<<endl;
    }
};
int main()
{
    Derived d;
    Derived *ptr;
    ptr=&d;
    ptr->showBase();
    ptr->showDerived();
    return 0;
}