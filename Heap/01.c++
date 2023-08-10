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
        return (2 * i + 1);
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
};

int main()
{
    MinHeap h(11);
    cout << h.left(3) << endl;

    return 0;
}