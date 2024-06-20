#include <iostream>

using namespace std;

int sum_numbers(int start = 1, int end = 10);

int main (void) {

    cout << "\nThe sum of numbers between 1 and 10 is: " << sum_numbers();

    // cout << sum_numbers(5, 15) << endl;

    // cout << sum_numbers(55, 67) << endl;

    // cout << sum_numbers(0, 100) << endl;

    cout << endl;
    
    system("pause");

    return 0;
}

// returns the sum of integers within a given range (default range is 1 - 10)
int sum_numbers(int start, int end) {

    int sum = 0;

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}