#include<iostream> 
using namespace std;

void reverse(int num)
{
    int digit = 0;
    int rev = 0;
    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout<<rev;
}

int main()
{
    reverse(20);
    return 0;
}