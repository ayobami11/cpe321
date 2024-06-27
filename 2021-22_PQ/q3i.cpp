#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

float convertDegreesToRadians(int degree);

int main(void)
{

    for (int i = 1; i <= 12; i++)
    {
        float numberInRadians = convertDegreesToRadians(i);

        cout << i << " degree(s) = " << numberInRadians << " radians" << endl;
        cout << "e^(" << numberInRadians << ") = " << exp(numberInRadians) << "\n" << endl;
    }

    system("pause");

    return 0;
}

float convertDegreesToRadians(int degree)
{
    return degree * (M_PI / 180);
}