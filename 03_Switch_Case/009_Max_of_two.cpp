#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout << "Enter two numbers: ";  
    cin>>a>>b;
    cout <<"Enter your choice: \n1. Maximum\n2. Minimum\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
            if(a>b)
                cout << "Maximum number is: " << a << endl;
            else
                cout << "Maximum number is: " << b << endl;
            break;
        case 2:
            if(a<b)
                cout << "Minimum number is: " << a << endl;
            else
                cout << "Minimum number is: " << b << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}