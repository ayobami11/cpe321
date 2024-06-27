// VS 2010 - compatible version

#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

float mean(vector<int> numbers);
float median(vector<int> numbers);
int mode(vector<int> numbers);

int main(void)
{

    vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(8);
    numbers.push_back(8);
    numbers.push_back(8);
    numbers.push_back(9);

    cout << "\nThe mean of the numbers is " << mean(numbers) << endl;
    cout << "\nThe median of the numbers is " << median(numbers) << endl;
    cout << "\nThe mode of the numbers is " << mode(numbers) << endl;

    system("pause");

    return 0;
}

float mean(vector<int> numbers)
{

    float sum = 0.0;
    int size = numbers.size();

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum / size;
}

float median(vector<int> numbers)
{
    int size = numbers.size();
    // assuming the numbers provided are already sorted
    int middleIndex = floor(size / 2.0);

    if (size % 2 == 1)
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
    int size = numbers.size();

    int maxCount = 0;
    int mode = numbers[0];

    for (int i = 0; i < size; i++)
    {
        int number = numbers[i];

        numberFrequency[number]++;

        if (numberFrequency[number] > maxCount)
        {
            maxCount = numberFrequency[number];
            mode = number;
        }
    }

    return mode;
}

// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <unordered_map>

// using namespace std;

// float mean(std::vector<int> numbers);
// float median(std::vector<int> numbers);
// int mode(std::vector<int> numbers);

// int main(void)
// {

//     vector<int> numbers = {1, 2, 4, 5, 7, 7, 8, 8, 8, 8, 9};

//     cout << "\nThe mean of the numbers is " << mean(numbers) << endl;
//     cout << "\nThe median of the numbers is " << median(numbers) << endl;
//     cout << "\nThe mode of the numbers is " << mode(numbers) << endl;

//     return 0;
// }

// float mean(vector<int> numbers)
// {

//     float sum = 0;

//     for (float number : numbers)
//     {
//         sum += number;
//     }

//     return sum / numbers.size();
// }

// float median(vector<int> numbers)
// {
//     // assuming the numbers provided are already sorted
//     int middleIndex = floor(numbers.size() / 2);

//     if (numbers.size() % 2 == 1)
//     {
//         return numbers[middleIndex];
//     }
//     else
//     {
//         return (numbers[middleIndex - 1] + numbers[middleIndex]) / 2.0;
//     }
// }

// int mode(vector<int> numbers)
// {
//     unordered_map<int, int> numberFrequency;

//     int maxCount = 0;
//     int mode  = numbers[0];

//     for (int number: numbers) {
//         numberFrequency[number]++;

//         if (numberFrequency[number] > maxCount) {
//             maxCount = numberFrequency[number];
//             mode = number;
//         }
//     }

//     return mode;
// }