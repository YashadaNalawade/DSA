#include<iostream>
using namespace std;

void pow(int x, int y)
{
    int res = 1;
    while(y!=0)
    {
        res = res * x;
        y--;
    }
    cout<<res;
}

int main()
{
    pow(2,5);
}