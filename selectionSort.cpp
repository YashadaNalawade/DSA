#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        } 
        if(min_index != i)
        swap(a[min_index],a[i]);
    }
}

void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {99,4,1,7};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    printArray(a,n);
    return 0;
}