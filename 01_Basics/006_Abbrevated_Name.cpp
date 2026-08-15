#include<iostream>
using namespace std;
int main()
{
    char FirstName[20], LastName[20];
    cout << "Enter your first name: ";
    cin >> FirstName;
    cout << "Enter your last name: ";
    cin >> LastName;
    cout << "Your abbreviated name is: " << FirstName[0] << "." << LastName[0] << "." << endl;
    return 0;
}