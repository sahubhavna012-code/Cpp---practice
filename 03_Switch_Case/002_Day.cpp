#include<iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7.\n";
    }

    return 0;
}