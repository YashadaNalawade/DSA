#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int beg, int end)
{
    int mid;
    while(beg<=end)
    {
        mid = (beg+end)/2;
        if(arr[mid] == target)
        { 
            return mid;
        }
        else if(arr[mid] > target)
        { 
            end = mid - 1;
        }
        else
        beg = mid+1;
    }
    return -1;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int beg = 0, end = n-1;
    int mid;
    int target = 5;
    int result = binarySearch(arr, target, 0, n-1);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}