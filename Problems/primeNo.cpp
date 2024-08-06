#include<iostream>
using namespace std;

void prime(int n)
{
    int count = 0;
    for(int i=0; i*i <= n; i++) // only checks till square root of a number
    {
        if(n % i == 0)
        {
            count ++;
            if(n / i != i) count++; // checks for other divisors greater than square root
        }
        if(count>2) break;
    }
    if(count>2) cout<<"not prime";
    else cout << "prime";
}

int main()
{
    prime(5);
}