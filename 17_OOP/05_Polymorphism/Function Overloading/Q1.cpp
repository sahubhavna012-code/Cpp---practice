#include<iostream>
using namespace std;
class print
{
    public:
        void show(int x)
        {
            cout<< "Integer: "<<x<<endl;
        }
        void show(double y)
        {
            cout<<"Double: "<<y<<endl;
        }
};
int main()
{
    print obj;
    obj.show(5);
    obj.show(5.43);
    return 0;
}