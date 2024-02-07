#include<iostream>
using namespace std;

void cycleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int ci = arr[i] - 1;
        if(arr[i] != arr[ci])
        {
            swap(arr[i],arr[ci]);
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {7,6,5,4,3,2,1}; // for N to 1 numbers only
    int n = sizeof(arr)/sizeof(arr[0]);
    cycleSort(arr,n);
    printArray(arr,n);
    return 0;
}