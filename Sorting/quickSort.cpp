#include<iostream>
using namespace std;
// Time complexity - O(N^2)

// 1. choose any element as pivot element
// 2. all elements less than pivot to the left side and greater to the right side

int partition(int a[], int lb, int ub) // parameter declaration is treated as a pointer to the first element of the array.
{
    int pivot = a[lb]; // keeps changing
    int start = lb;
    int end = ub;

    while(start <= end)
    { 
        while(a[start] >= pivot)
        {
            start++;
        }
        while(a[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(a[start],a[end]);
        }
    }
        swap(a[end],a[lb]);

    return end;
}

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< a[i] << " ";
    }
}

void quickSort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }
}

int main()
{
    int a[] = {23,77,89,4,12};
    int n = sizeof(a)/sizeof(a[0]); // for ex - 20 bytes / 4 bytes = 5

    quickSort(a,0,n-1);
    printArray(a,n);

    return 0;
}

