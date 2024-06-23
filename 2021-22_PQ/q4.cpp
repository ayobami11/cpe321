#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

float mean(std::vector<int> numbers);
float median(std::vector<int> numbers);
int mode(std::vector<int> numbers);

int main(void)
{

    vector<int> numbers = {1, 2, 4, 5, 7, 7, 8, 8, 8, 8, 9};

    cout << "\nThe mean of the numbers is " << mean(numbers) << endl;
    cout << "\nThe median of the numbers is " << median(numbers) << endl;
    cout << "\nThe mode of the numbers is " << mode(numbers) << endl;

    return 0;
}

float mean(vector<int> numbers)
{

    float sum = 0;

    for (float number : numbers)
    {
        sum += number;
    }

    return sum / numbers.size();
}

float median(vector<int> numbers)
{
    // assuming the numbers provided are already sorted
    int middleIndex = floor(numbers.size() / 2);

    if (numbers.size() % 2 == 1)
    {
        return numbers[middleIndex];
    }
    else
    {
        return (numbers[middleIndex - 1] + numbers[middleIndex]) / 2.0;
    }
}

int mode(vector<int> numbers)
{
    unordered_map<int, int> numberFrequency;

    int maxCount = 0;
    int mode  = numbers[0];

    for (int number: numbers) {
        numberFrequency[number]++;

        if (numberFrequency[number] > maxCount) {
            maxCount = numberFrequency[number];
            mode = number;
        }
    }

    return mode;
}