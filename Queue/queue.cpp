#include<iostream>
using namespace std;

class queue
{
    public :
    int front = 0, rear = -1;
    int Q[10];
    void insert(int val)
    {
        rear++;
        Q[rear] = val;
    }

    void del()
    {
        front++;
    }

    void printQ()
    {
        for(int i=front; i<=rear; i++)
        {
            cout<< Q[i]<<" ";
        }
    }
};

int main()
{
    queue q;
    q.insert(4);
    q.insert(3);
    q.insert(2);
    q.insert(1);
    q.del();
    q.printQ();
    return 0;
}