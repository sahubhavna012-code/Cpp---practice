#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three angles of triangle: " << endl;
    cin >> a >> b >> c;
    if ((a + b + c == 180) && (a > 0 && b > 0 && c > 0))
    {
        cout << "valid triangle";
    }
    else
    {
        cout << "Not valid triangle";
    }
    return 0;
}