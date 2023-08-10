// Simple Implementation of Queue using Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    void enqueue(int x)
    {
        if (size == cap)
            return;
        arr[size] = x;
        size++;
    }

    void dequeue()
    {
        if (size == 0)
            return;
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getFront()
    {
        if (size == 0)
            return -1;
        return arr[0];
    }

    int getRear()
    {
        if (size == 0)
            return -1;
        return arr[size - 1];
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
    q.dequeue();
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
    return 0;
}