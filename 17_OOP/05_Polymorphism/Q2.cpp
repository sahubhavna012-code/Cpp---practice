#include<iostream>
using namespace std;
class print
{
    public:
        int show(int x)
        {
            cout<< "Integer: "<<x<<endl;
            return x;
        }
        void show(int y)
        {
            cout<<"Integer: "<<y<<endl;
        }
};
int main()
{
    print obj;
    obj.show(5);
    obj.show(6);
    return 0;
}

//If fxns have same name and same number of parameters but different return type then it is not possible to overload them.