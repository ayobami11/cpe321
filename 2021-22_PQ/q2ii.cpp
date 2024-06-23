#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

// InvNapLog(x) = 10^7 * e^(-x / (10^7))

double convertDegreesToRadians(int degree);
double findInvNapLog(double x);

int main(void)
{

    for (int i = 1; i <= 12; i++)
    {
        double numberInRadians = convertDegreesToRadians(i);

        cout << i << " degree(s) = " << numberInRadians << " radians" << endl;
        cout << "InvNapLog(" << numberInRadians << ") = " << findInvNapLog(numberInRadians) << "\n" << endl;
    }

    return 0;
}

double convertDegreesToRadians(int degree)
{
    return degree * (M_PI / (double) 180);
}

double findInvNapLog(double x)
{
    return pow(10, 7) * exp(-x / pow(10, 7));
}