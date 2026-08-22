#include<iostream>
using namespace std;
class operations 
{
    int a=2,b=5,c=6,d=7;
    public:
        void add()
        {
            c=a+b;
            cout<< "Sum is: " << c<<endl;
        }
        void sub()
        {
            d=a-b-c;
            cout<< "Subtraction is: " <<d<<endl;
        }
        void multiply()
        {
            int e;
            e=a*b*c*d;
            cout<<"Multiplication is: "<<e<<endl;
        }
        void display()
        {
            cout<<a << " "<<b <<" "<<c <<" "<<d ;
        }
};
int main()
{
    
    operations obj;
    operations *p;
    p=&obj;
    p->add();
    p->sub();
    p->multiply();
    p->display();
    return 0;
}
//The numbers gets updated this where the problem begins