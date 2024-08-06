#include<iostream>
using namespace std;

int binarySearch(int a[], int beg, int end, int key)
{
    if(beg<=end) 
      {
        int mid = beg + (end-beg)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        if(a[mid] > key)
        return binarySearch(a,beg,mid-1,key);
        else
        return binarySearch(a,mid+1,end,key);
      }
    return -1;
}


int main()
{
    int a[] = {2, 3, 4, 10, 40};
    int n = sizeof(a)/sizeof(a[0]);
    int key=10;
    int loc = binarySearch(a,0,n-1,key);
    (loc == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << loc;
    return 0;
}