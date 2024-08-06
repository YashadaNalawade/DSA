#include<iostream>
using namespace std;

void palindrome(int num)
{
    int digit =0, rev =0, n = num;
    while(n!=0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(num == rev)
    cout<<"palindrome";
    else cout<<"not palindrome";
}

int main()
{
    palindrome(123);
}