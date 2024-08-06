#include <iostream>
#include <map>
using namespace std;

void findDuplicatesUsingMap(int arr[], int size) {
    map<int, int> frequencyMap; 

    for (int i = 0; i < size; i++) 
    {
        frequencyMap[arr[i]]++;
    }

    for (auto it : frequencyMap) 
    {
        if (it.second > 1) 
        {
            cout << "Duplicate element: " << it.first << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicatesUsingMap(arr, size);
    return 0;
}
