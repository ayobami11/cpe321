#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

double convertDegreesToRadians(int degree);
double findNapLog(double x);

// NapLog(x) = -10^7 * ln(x/10^7)

int main(void) {
    
    for (int i = 1; i <= 12; i++) {
        double numberInRadians = convertDegreesToRadians(i);

        cout << i << " degree(s) = " << numberInRadians << " radians" << endl;
        cout << "NapLog(" << numberInRadians << ") = " << findNapLog(numberInRadians) << "\n" << endl;
    }

    return 0;
}

double convertDegreesToRadians(int degree) {
    return degree * (M_PI / (double) 180);
}

double findNapLog(double x) {
    return -1 * pow(10, 7) * log(x / pow(10, 7));
}