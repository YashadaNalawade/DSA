#include<iostream>
using namespace std;


void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb;
    int j = mid+1;
    int c[ub], k=lb;
    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            c[k] = arr[i];
            i++;
        }
        else
        {
            c[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        c[k] = arr[i];
        i++;
        k++;
    }
    while(j<=ub)
    {
        c[k] = arr[j];
        j++;
        k++;
    }

    for(int i=lb; i < k; i++)
    {
        arr[i] = c[i];
    }
}

void mergeSort(int arr[], int lb, int ub)
{
    if(lb<ub)     
    {
        int mid = (lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
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
    int arr[] = {38,27,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lb = 0;
    int ub = n-1;
    mergeSort(arr,lb,ub);
    printArray(arr,n);
    return 0;
}