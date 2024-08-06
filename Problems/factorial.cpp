#include <iostream>
using namespace std;

void factorial(int num)
{
    int fact = 1;
    while (num > 0)
    {
        fact = fact * num;
        num--;
    }
    cout << fact;
}

int main()
{
    factorial(5);
}
