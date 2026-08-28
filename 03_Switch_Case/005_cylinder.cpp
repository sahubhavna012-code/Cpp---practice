#include<iostream>
using namespace std;
int main()
{
    int radius, height,choice;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "Choose an option:\n";
    cout << "1. Calculate Volume\n";
    cout << "2. Calculate Surface Area\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "Volume of the cylinder: " << 3.14 * radius * radius * height << endl;
            break;
        case 2:
            cout << "Surface Area of the cylinder: " << 2 * 3.14 * radius * (radius + height) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}