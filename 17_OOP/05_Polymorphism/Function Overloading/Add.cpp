#include<iostream>
using namespace std;
class print
{
    public:
        void add(int x,int y)
        {
            cout<<"Addition of two integers is: "<<x+y<<endl;
        }
        void add(int x,int y,int z)
        {
            cout<<"Addition of three integers is: "<<x+y+z<<endl;
        }
        void add(float x,float y)
        {
            cout<<"Addition of two floating point is: "<<x+y<<endl;
        }
};
int main()
{
    print obj;
    obj.add(2,3);
    obj.add(2,3,4);
    obj.add(3.4f,5.2f);
    return 0;
}