// Binary Heap Insert

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class MinHeap
{
public:
    int *arr;
    int size;
    int capacity;
    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    int left(int i)
    {
        return (2 * i + 1);
    }
    int right(int i)
    {
        return (2 * i + 2);
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    void insert(int x)
    {
        if (size == capacity)
            return;
        ;
        size++;
        arr[size - 1] = x;
        int i = size - 1;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};

int main()
{
    MinHeap h(10);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    for (int i = 0; i < h.size; i++)
        cout << h.arr[i] << " ";
    return 0;
}