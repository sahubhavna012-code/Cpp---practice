#include <iostream>
using namespace std;
void sum(int a, int b)
{
    int sum = a + b;
    cout << "Sum: " << sum << endl;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum(a, b);
    return 0;
}