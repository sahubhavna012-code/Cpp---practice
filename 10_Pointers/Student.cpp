#include<iostream>
using namespace std;
class student
{
    int roll,marks;
    string name;
    public:
        void enter()
        {
            cout<<"Enter roll number: ";
            cin>>roll;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void display()
        {
            cout<<"Roll number: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    student s;
    student *ptr;
    ptr=&s;
    ptr->enter();
    ptr->display();
    return 0;
}