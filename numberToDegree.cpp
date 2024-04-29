//  needed to access the pi constant
#define _USE_MATH_DEFINES
#include <iostream>
// for the pi constant
#include <cmath>

using namespace std;

float convert_number_to_degree(float number);

int main(void)
{

    cout << "\npi to degrees: " << convert_number_to_degree(M_PI) << " degrees.";

    cout << "\n10 to degrees: " << convert_number_to_degree(10) << " degrees.";

    cout << "\n2pi to degrees: " << convert_number_to_degree(2 * M_PI) << " degrees.";

    cout << endl;

    system("pause");

    return 0;
}

float convert_number_to_degree(float number)
{
    // I'm guessing what he means by number is radian
    return number * 180 / M_PI;
}