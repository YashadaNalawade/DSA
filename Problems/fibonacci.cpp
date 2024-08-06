#include<iostream>
using namespace std;

void fibonacci(int num)
{
    int fno=0, sno=1, fib;
    cout << fno << " ";
    cout << sno << " ";
    while(fib!=num)
    {
        fib = fno + sno;
        fno = sno;
        sno = fib;
        cout<< fib << " ";
    }
}

int main()
{
    fibonacci(13);
    return 0;
}