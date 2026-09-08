#include<iostream>
using namespace std;
class print 
{
    public:
        void calc(int x)
        {
            cout<<"Square of an integer is: "<<x*x<<endl;
        }
        void calc(int x,int y)
        {
            cout<<"Cube of an integer is: "<<x*x*x<<endl;
        }
        void calc(float x)
        {
            cout<<"Square of a floating-point number is: "<<x*x<<endl;
        }
};
int main()
{
    print obj;
    obj.calc(5);
    obj.calc(3, 4);
    obj.calc(5.33f);
    return 0;
}