// logarithmic base 10 function in radians
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.142
int main() {

    for (int i = 0; i < 13; i++) {
        cout << i << " degrees:" << endl;
        cout << "log1 => " << log10(PI * i / 180) << endl;
        cout << "log2 => " << log10(PI * i / 180) << endl;
        cout << "log3 => " << log10(PI * i / 180) << endl;
        cout << "log4 => " << 1 / log10(PI * i / 180) << endl;
        cout << "log5 => " << 1 / log10(PI * i / 180) << endl;
        cout << "log6 => " << 1 / log10(PI * i / 180) << endl;
    }
}