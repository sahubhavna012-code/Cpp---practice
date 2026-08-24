#include<iostream>
using namespace std;
class parent
{
    int a;
    public:
        void show1()
        {
            cout<<"Enter a value: ";
            cin>>a;
            cout<<"The value of a is: "<<a<<endl;
        }
};
class child: public parent
{
    int b;
    public:
        void show2()
        {
            cout<<"Enter a value: ";
            cin>>b;
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main()
{
    child c;
    c.show1();
    c.show2();
    return 0;
}