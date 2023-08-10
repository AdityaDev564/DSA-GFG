// n-th node from the end of a Linked List

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
    cout << endl;
}

void printNthfromEnd(Node *head, int n)
{
    int len = 0;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        len++;
    }
    if (len < n)
    {
        return;
    }
    Node *curr = head;
    for (int i = 1; i < len - n + 1; i++)
    {
        curr = curr->next;
    }
    cout << (curr->data) << endl;
}

void printNthFromEnd(Node *head, int n)
{
    if (head == NULL)
        return;
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << second->data << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    Node *temp5 = new Node(60);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;
    printList(head);
    printNthFromEnd(head, 2);
    printNthfromEnd(head, 2);
    return 0;
}