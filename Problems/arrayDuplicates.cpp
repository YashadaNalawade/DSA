#include<iostream>
using namespace std;

void duplicate()
{
    int arr[6] = {1,1,2,3,4,5};
    for(int i=0; i<6; i++)
    {
        for(int j = i+1; j<6; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<"duplicate element :" << arr[i];
                break;
            }
        }
    }
}

int main()
{
    duplicate();
}

// approach 2
#include <iostream>
using namespace std;

void findDuplicatesSorting(int arr[], int size) {
    sort(arr, arr + size); // Sort the array

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << "Duplicate element: " << arr[i] << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicatesSorting(arr, size);
    return 0;
}

// approach 3
#include <iostream>
#include <map>
using namespace std;

void findDuplicatesUsingMap(int arr[], int size) {
    map<int, int> frequencyMap; // Map to store the frequency of each element

    // Populate the map with element frequencies
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }

    // Iterate through the map to find duplicates
    for (const auto& entry : frequencyMap) {
        if (entry.second > 1) {
            cout << "Duplicate element: " << entry.first << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicatesUsingMap(arr, size);
    return 0;
}
