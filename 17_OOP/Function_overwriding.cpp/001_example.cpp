#include<iostream>
using namespace std;
class base
{
    public:
        virtual void show()
        {
            cout<<"Data of base class"<<endl;
        }
};
class child:public base
{
    public:
        void show()
        {
            cout<<"Data of child class"<<endl;
        }
};
int main()
{
    base *ptr;
    child obj;
    ptr=&obj;
    ptr->show();
    return 0;
}