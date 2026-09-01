#include<iostream>
using namespace std;
class print 
{
    public:
    void show(int x)
    {
        cout<<"Integer: "<<x<<endl;
    }
    void show(double y)
    {
        cout<<"Double: "<<y;
    }
};
int main()
{
    print obj;
    obj.show(5);
    obj.show(3.4);
    return 0;
}