#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    switch(n%2)
    {
        case 0:
            cout << n << " is even." << endl;
            break;
        case 1:
            cout << n << " is odd." << endl;
            break;
    }
    return 0;
}