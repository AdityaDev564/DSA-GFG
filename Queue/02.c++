// Efficient Implementation of Queue using Circular Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Queue
{
    int *arr;
    int front, cap, size;
    Queue(int c)
    {
        cap = c;
        front = 0;
        size = 0;
        arr = new int[cap];
    }

    void enqueue(int x)
    {
        if (size == cap)
            return;
        int rear = (front + size - 1) % cap;
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }

    void dequeue()
    {
        if (size == 0)
            return;
        front = (front + 1) % cap;
        size--;
    }

    int getFront()
    {
        if (size == 0)
            return -1;
        return arr[front];
    }

    int getRear()
    {
        if (size == 0)
            return -1;
        return arr[(front + size - 1) % cap];
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
        return (size == cap);
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
    cout << q.getSize() << endl;
    return 0;
}