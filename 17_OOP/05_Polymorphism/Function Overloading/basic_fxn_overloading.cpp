#include<iostream>
using namespace std;
class print
{
    public:
        void area(double x)
        {
            int a=3.14*x*x;
            cout<<"Area of circle is: "<<a<<endl;
        }
        void area(int x,int y)
        {
            cout<<"Area of rectangle is: "<<x*y<<endl;
        }
        void area(int x)
        {
            cout<<"Area of Square is: "<<x*x<<endl;
        }
};
int main()
{
    print obj;
    obj.area(3.2);
    obj.area(2,3);
    obj.area(4);
    return 0;
}