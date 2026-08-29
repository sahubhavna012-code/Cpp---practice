#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next, i = 1;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    while (i <= n) {
        cout << first << " ";   
        next = first + second;  
        first = second;         
        second = next;
        i++;
    }

    return 0;
}
