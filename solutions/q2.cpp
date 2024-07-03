// Naperian logarithmic function in radians
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.142
int main()
{

    for (int i = 0; i < 13; i++)
    {
        cout << i << " degrees:" << endl;
        cout << "ln1 => " << log(PI * i / 180) << endl;
        cout << "ln2 => " << log(PI * i / 180) << endl;
        cout << "ln3 => " << log(PI * i / 180) << endl;
        cout << "ln4 => " << 1 / log(PI * i / 180) << endl;
        cout << "ln5 => " << 1 / log(PI * i / 180) << endl;
        cout << "ln6 => " << 1 / log(PI * i / 180) << endl;
    }
}