#include<iostream>
using namespace std;
class print
{
    public:
        void show(int x,int y)
        {
            cout<< "Integer: "<<x<<" "<<y<<endl;
        }
        void show(double x,int y)
        {
            cout<<"Double: "<<x<<" "<<y<<endl;
        }
};
int main()
{
    print obj;
    obj.show(5,10);
    obj.show(5.43,20);
    return 0;
}