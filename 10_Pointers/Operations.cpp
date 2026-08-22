#include<iostream>
using namespace std;
class operations 
{
    public:
        void add()
        {
            int a,b,c;
            cout<< "Enter two numbers: " <<endl;
            cin >> a >> b;
            c=a+b;
            cout<< "Sum is: " << c<<endl;
        }
        void sub()
        {
            int a,b,c,d;
            cout<<"Enter three numbers: " <<endl;
            cin>>a>>b>>c;
            d=a-b-c;
            cout<< "Subtraction is: " <<d<<endl;
        }
        void multiply()
        {
            int a,b,c,d,e;
            cout <<"Enter four numbers: "<<endl;
            cin>>a>>b>>c>>d;
            e=a*b*c*d;
            cout<<"Multiplication is: "<<e<<endl;
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
    return 0;
}