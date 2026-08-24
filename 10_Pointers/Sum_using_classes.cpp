#include<iostream>
using namespace std;
class parent
{
    public:
    int a,b,c;
    public:
    void display1()
    {
        cout<<"enter a&b:";
        cin>>a>>b;
        c=(a+b)/2;
       
    }
};
class child:public parent
{
    public:
    void display2()
    {
        cout<<"average is:"<<c<<endl;
    }
};
int main()
{
   
   child c;
   child *p=&c;
   p->display1();
   p->display2();
    return 0;
}