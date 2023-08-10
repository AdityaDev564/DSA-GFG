// Implementation of Queue using Linked List

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

struct Queue
{
    Node *front, *rear;
    int size;
    Queue()
    {
        front = rear = NULL;
        size = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == NULL)
        {
            front = rear = temp;
            size++;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void dequeue()
    {
        if (front == NULL)
            return;
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
        size--;
    }

    int getFront()
    {
        if (front == NULL)
            return -1;
        return front->data;
    }

    int getRear()
    {
        if (rear == NULL)
            return -1;
        return rear->data;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    bool isFull()
    {
        return false;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.getSize() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
    return 0;
}