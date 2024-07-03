// logarithmic base 16 function in radians
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.142
int main()
{

    for (int i = 0; i < 13; i++)
    {
        cout << i << " degrees:" << endl;
        cout << "lga => " << log16(PI * i / 180) << endl;
        cout << "lgb => " << log16(PI * i / 180) << endl;
        cout << "lgc => " << log16(PI * i / 180) << endl;
        cout << "lgd => " << 1 / log16(PI * i / 180) << endl;
        cout << "lge => " << 1 / log16(PI * i / 180) << endl;
        cout << "lgf => " << 1 / log16(PI * i / 180) << endl;
    }
}