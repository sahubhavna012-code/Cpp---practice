#include<iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    cout << "Enter marks for three subjects: ";
    cin >> m1 >> m2 >> m3;
    int total = m1 + m2 + m3;
    switch(total / 3)
    {
        case 10:
        case 9:
            cout << "Grade: A\n";
            break;
        case 8:
            cout << "Grade: B\n";
            break;
        case 7:
            cout << "Grade: C\n";
            break;
        case 6:
            cout << "Grade: D\n";
            break;
        default:
            cout << "Grade: F\n";
    }
    return 0;
}