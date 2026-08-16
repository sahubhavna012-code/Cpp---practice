#include<iostream>
using namespace std;
int calculator(int a, int b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if(b != 0)
                return a / b;
            else
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        default:
            cout << "Error: Invalid operator!" << endl;
            return 0;
    }
}
int main()
{
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    int result = calculator(a, b, op);
    cout << "Result: " << result << endl;
    return 0;
}