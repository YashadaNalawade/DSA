#include <iostream>
using namespace std;

void swap(int &a, int &b) // call by referance variables
{
    int temp = a;
    a = b;
    b = temp;
}

void swapbyPointer(int *m, int *n) // call by referance pointers
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int sum(int p, int q) // call by value
{
    int sum = p + q;
    return sum;
}

int main()
{
    int x = 10;
    int y = 20;
    swap(x, y);
    cout << "x : " << x << " "
         << "y :" << y;
    int res = sum(x, y);
    cout << res;
    swapbyPointer(&x, &y);
    cout << "x : " << x << " "
         << "y :" << y;
    return 0;
}