#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;

    // Map discriminant into categories: 1 (positive), 0 (zero), -1 (negative)
    int category;
    if (discriminant > 0) category = 1;
    else if (discriminant == 0) category = 0;
    else category = -1;

    switch (category) {
        case 1: {
            double root1 = (-b + sqrt(discriminant)) / (2*a);
            double root2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "Roots are real and distinct:\n";
            cout << "Root 1 = " << root1 << "\n";
            cout << "Root 2 = " << root2 << "\n";
            break;
        }
        case 0: {
            double root = -b / (2*a);
            cout << "Roots are real and equal:\n";
            cout << "Root = " << root << "\n";
            break;
        }
        case -1: {
            double realPart = -b / (2*a);
            double imagPart = sqrt(-discriminant) / (2*a);
            cout << "Roots are complex:\n";
            cout << "Root 1 = " << realPart << " + " << imagPart << "i\n";
            cout << "Root 2 = " << realPart << " - " << imagPart << "i\n";
            break;
        }
    }

    return 0;
}
