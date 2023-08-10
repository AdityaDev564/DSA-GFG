// Largest Element in an Array

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int largestElement(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 10, 20, 30};
    cout << largestElement(arr, 4) << endl;
    return 0;
}