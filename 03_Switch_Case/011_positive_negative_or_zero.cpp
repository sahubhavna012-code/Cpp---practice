#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    switch(n > 0)
    {
        case 1:
            cout << n << " is positive." << endl;
            break;
        case 0:
            switch(n < 0)
            {
                case 1:
                    cout << n << " is negative." << endl;
                    break;
                case 0:
                    cout << n << " is zero." << endl;
                    break;
            }
            break;
    }
    return 0;
}