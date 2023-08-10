// Remove duplicates in Sorted Array
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeDuplicates(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = res; i < n; i++)
    {
        arr[i] = -1;
    }
    print(arr, res);
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30, 30};
    print(arr, 7);
    removeDuplicates(arr, 7);
    return 0;
}