#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    const int size = 6; // Adjust the size of the array as needed
    int arr[size] = {5, 2, 8, 1, 9, 3}; // Replace this with your array

    int firstMin = INT_MAX, secondMin = INT_MAX;
    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] < firstMin) 
        {
            secondMin = firstMin;
            firstMin = arr[i];
        } 
        else if (arr[i] < secondMin && arr[i] != firstMin) 
        {
            secondMin = arr[i];
        }

        if (arr[i] > firstMax) 
        {
            secondMax = firstMax;
            firstMax = arr[i];
        } 
        else if (arr[i] > secondMax && arr[i] != firstMax) 
        {
            secondMax = arr[i];
        }
    }

    cout << "Second Minimum: " << secondMin << endl;
    cout << "Second Maximum: " << secondMax << endl;

    return 0;
}
