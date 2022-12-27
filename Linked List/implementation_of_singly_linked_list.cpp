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

// Traversing Linked List
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void recPrint(Node *curr)
{
    if (curr == NULL)
        return;
    cout << curr->data << " ";
    recPrint(curr->next);
}

Node *insertBeg(Node *head)
{
    Node *temp = new Node(-10);
    temp->next = head;
    head = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    // Node *head = NULL; // If List is Empty then insertion at Beg
    printList(head);
    cout << "\n";
    // recPrint(head);
    head = insertBeg(head);
    recPrint(head);
    return 0;
}
