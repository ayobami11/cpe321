// logarithmic base 8 function in radians
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.142
int main()
{

    for (int i = 0; i < 13; i++)
    {
        cout << i << " degrees:" << endl;
        cout << "lig1 => " << log8(PI * i / 180) << endl;
        cout << "lig2 => " << log8(PI * i / 180) << endl;
        cout << "lig3 => " << log8(PI * i / 180) << endl;
        cout << "lig4 => " << 1 / log8(PI * i / 180) << endl;
        cout << "lig5 => " << 1 / log8(PI * i / 180) << endl;
        cout << "lig6 => " << 1 / log8(PI * i / 180) << endl;
    }
}