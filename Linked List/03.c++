// Search in a Linked List

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

int rSearchLL(Node *head, int x, int pos = 1)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return pos;
    else
    {
        pos++;
        return rSearchLL(head->next, x, pos++);
    }
}

int searchLL(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            return pos;
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    cout << searchLL(head, 20) << endl;
    cout << searchLL(head, 50) << endl;
    cout << rSearchLL(head, 20) << endl;
    cout << rSearchLL(head, 40) << endl;
    cout << rSearchLL(head, 50) << endl;
    return 0;
}