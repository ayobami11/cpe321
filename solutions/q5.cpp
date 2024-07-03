// logarithmic base 2 function in radians
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.142
int main()
{

    for (int i = 0; i < 13; i++)
    {
        cout << i << " degrees:" << endl;
        cout << "lg1 => " << log2(PI * i / 180) << endl;
        cout << "lg2 => " << log2(PI * i / 180) << endl;
        cout << "lg3 => " << log2(PI * i / 180) << endl;
        cout << "lg4 => " << 1 / log2(PI * i / 180) << endl;
        cout << "lg5 => " << 1 / log2(PI * i / 180) << endl;
        cout << "lg6 => " << 1 / log2(PI * i / 180) << endl;
    }
}