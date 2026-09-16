#include<iostream>
using namespace std;
class student
{
    private:
        int age;
    public:
        student()
        {
            age=2;
            cout<<"Age= "<<age<<endl;
        }
        student(const student &s)
        {
            age=s.age;
            cout<<"Age: "<<age;
        }
};
int main()
{
    student obj1;
    student obj2=obj1;
    return 0;
}