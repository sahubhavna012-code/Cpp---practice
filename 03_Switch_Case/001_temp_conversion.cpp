#include<iostream>
using namespace std;
int main()
{
    int choice;
    float temp, convertedTemp;

    cout << "Temperature Conversion Menu:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            convertedTemp = (temp * 9/5) + 32;
            cout << temp << "°C is equal to " << convertedTemp << "°F\n";
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            convertedTemp = (temp - 32) * 5/9;
            cout << temp << "°F is equal to " << convertedTemp << "°C\n";
            break;
        default:
            cout << "Invalid choice! Please select either 1 or 2.\n";
    }

    return 0;
}