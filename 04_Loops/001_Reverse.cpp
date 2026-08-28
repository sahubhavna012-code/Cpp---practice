#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: ";

    int i = str.length() - 1; 
    while (i >= 0) {
        cout << str[i];
        i--;  
    }

    return 0;
}