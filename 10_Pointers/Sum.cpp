#include<iostream>
using namespace std;
class student
{
    int a,b,c;
    public:
        void input()
        {
            cout<<"Enter two inputs: " <<endl;
            cin>>a>>b;
        }
        void output()
        {
            c=a+b;
            cout<< "Sum is: " << c <<endl;
        }
};
int main()
{
    student obj;
    student *p;
    p=&obj;
    p-> input();
    p-> output();
}