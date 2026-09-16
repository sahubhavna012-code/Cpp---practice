#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:
        void getdataA()
        {
            cout<<"Enter 1st number: "<<endl;
            cin>>a;
        }
        friend void add(A,B);
};
class B
{
    private:
        int b;
    public:
        void getdataB()
        {
            cout<<"Enter 2nd number: "<<endl;
            cin>>b;
        }
        friend void add(A,B);
};
void add(A x,B y)
{
    int sum=x.a+y.b;
    cout<<"Sum is: "<<sum<<endl;
}
int main()
{
    A obj1;
    B obj2;
    obj1.getdataA();
    obj2.getdataB();
    add(obj1,obj2);
    return 0;
}