#include<iostream>
using namespace std;
class Employee
{
    private:
        int salary;
    public:
        Employee(int s)
        {
            salary=s;
        }
        friend void displaySalary(Employee emp);
};
void displaySalary(Employee emp)
{
    cout<<"Salary is: "<<emp.salary;
}
int main()
{
    Employee obj(200);
    displaySalary(obj);
    return 0;
}