#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertSorted(int d, Node *head)
{
    Node *temp = new Node(d);
    if (head == NULL)
        return temp;
    if (d < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->data < d)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void print(Node *head)
{
    if (head == NULL)
        cout << "List is Empty!";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{
    Node *head = NULL;

    head = insertSorted(10, head);
    insertSorted(20, head);
    insertSorted(30, head);
    insertSorted(30, head);
    print(head);
    return 0;
}