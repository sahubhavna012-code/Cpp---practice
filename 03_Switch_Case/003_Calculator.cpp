#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Sum: " << a + b << endl;
            break;
        case 2:
            cout << "Difference: " << a - b << endl;
            break;
        case 3:
            cout << "Product: " << a * b << endl;
            break;
        case 4:
            if(b != 0)
                cout << "Quotient: " << a / b << endl;
            else
                cout << "Error! Division by zero is not allowed.\n";
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 4.\n";
    }

    return 0;
}