#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    // Input coefficients
    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and distinct:\n";
        cout << "Root 1: " << root1 << "\n";
        cout << "Root 2: " << root2 << "\n";
    } else if (discriminant == 0) {
        // One real root (repeated)
        double root = -b / (2 * a);

        cout << "Roots are real and repeated:\n";
        cout << "Root: " << root << "\n";
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Roots are complex:\n";
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
