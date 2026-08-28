#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;          // get last digit
        result += remainder * remainder * remainder; // cube it and add
        originalNum /= 10;                     // remove last digit
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}