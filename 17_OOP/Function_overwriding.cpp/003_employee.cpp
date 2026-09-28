#include<iostream>
using namespace std;

class employee
{
    public:
        virtual void show()
        {
            cout << "Salary of employee" << endl;
        }
};
class Manager:public employee
{
    public:
        void show()
        {
            cout << "Salary of Manager" << endl;
        }
};
class Developer:public employee
{
    public:
        void show()
        {
            cout << "Salary of Developer" << endl;
        }
};
int main()
{
    employee *ptr;
    Manager obj1;
    Developer obj2;
    ptr=&obj1;
    ptr->show();
    ptr=&obj2;
    ptr->show();
    return 0;
}