// Operations on Arrays

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int insert(int arr[], int n, int pos, int cap, int x)
{
    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}

void deleteElement(int arr[], int n, int x)
{
    int idx = linearSearch(arr, n, x);
    if (idx == -1)
    {
        cout << "Element not found" << endl;
    }
    for (int i = idx; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 10, 20, 30};
    printArray(arr, 4);
    int cap = 5;
    int n = 4;
    int pos = 2;
    int x = 15;
    cout << insert(arr, n, pos, cap, x) << endl;
    printArray(arr, 5);
    cout << linearSearch(arr, 5, 20) << endl;
    deleteElement(arr, 5, 20);
    printArray(arr, 4);
    return 0;
}