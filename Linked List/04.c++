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

// void insertAtFirst(Node *&head, int x)
// {
//     Node *temp = new Node(x);
//     temp->next = head;
//     head = temp;
// }

Node *insertAtFirst(Node *&head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
    return temp;
}

int main()
{
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // head->next = temp1;
    // temp1->next = temp2;
    // printList(head);
    // cout << endl;
    Node *head = NULL;
    // insertAtFirst(head, 5);
    insertAtFirst(head, 10);
    printList(head);
    return 0;
}