#include <iostream>
using namespace std;

int power(int *a, int b)
{
    if(b==1) return 1;
    *a = *a * 3;
    power(a, b-1);
    return *a;
}

int main()
{
    int a = 3;
    int b = 5;
    int ans = power(&a,b);
    cout<<ans;
    return 0;
}