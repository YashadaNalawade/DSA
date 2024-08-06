#include <iostream>
using namespace std;

struct node
{
    node *next;
    int data;
};

void traversal(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

node *createList(int n)
{
    node *first = NULL, *last = NULL, *newNode = NULL;
    for (int i = 1; i <= n; i++)
    {
        newNode = new node;
        cout << "enter node data : ";
        cin >> newNode->data;
        if (i == 1)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        last->next = NULL;
    }
    return(first);
}

int main()
{
    int n;
    cout << "enter total nodes:";
    cin >> n;
    node *first = NULL;
    first = createList(n);
    traversal(first);
    return 0;
}
