#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void insertAtLast(Node *&head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}

int main()
{
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // Node *temp3 = new Node(40);
    // head->next = temp1;
    // temp1->next = temp2;
    // temp2->next = temp3;
    Node *head = NULL;
    printList(head);
    cout << endl;
    insertAtLast(head, 50);
    printList(head);
    return 0;
}