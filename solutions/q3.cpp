// exponential function in radians
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.142
int main()
{

    for (int i = 0; i < 13; i++)
    {
        cout << i << " degrees:" << endl;
        cout << "exp1 => " << exp(PI * i / 180) << endl;
        cout << "exp2 => " << exp(PI * i / 180) << endl;
        cout << "exp3 => " << exp(PI * i / 180) << endl;
        cout << "exp4 => " << 1 / exp(PI * i / 180) << endl;
        cout << "exp5 => " << 1 / exp(PI * i / 180) << endl;
        cout << "exp6 => " << 1 / exp(PI * i / 180) << endl;
    }
}