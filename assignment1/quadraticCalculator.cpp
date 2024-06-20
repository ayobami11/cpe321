#include <iostream>
// for power (pow), square root (sqrt) functions
#include <cmath>
// for using complex numbers
#include <complex>

using namespace std;

void solve_quadratic_equation(float a, float b, float c);

int main (void) {

    // example of real and unequal roots
    solve_quadratic_equation(1, -5, 6);
    // example of complex and unequal roots
    solve_quadratic_equation(2, 4, 6);
    // example of real and equal roots
    solve_quadratic_equation(1, -4, 4);

    cout << endl;

    system("pause");

    return 0;
}

void solve_quadratic_equation(float a, float b, float c) {

    float discriminant = pow(b, 2) - (4 * a * c);

    /*
        positive discriminant (> 0): real and unequal roots
        negative discriminant (< 0): complex and unequal roots
        zero discriminant (== 0): real and equal roots
    */

    if (discriminant > 0) {

        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "\n The roots of the quadratic equation are: " << root1 << " and " << root2;
    } else if (discriminant < 0) {

        // real and imaginary parts of the complex number
        float root_real = -b / (2 * a);
        float root_imag = sqrt(abs(discriminant)) / (2 * a);

        complex<float> root1(root_real, root_imag);
        complex<float> root2(root_real, -root_imag);

        cout << "\n The roots of the quadratic equation are: " << root1 << " and " << root2;
    } else {
        // discriminant == 0

        float root = (-b + sqrt(discriminant)) / (2 * a);

        cout << "\n The roots of the quadratic equation are: " << root << " and " << root;
    }
}