// Array rotate by 1

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void lRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
    cout << "After rotation" << endl;
    lRotateOne(arr, 5);
    print(arr, 5);
    return 0;
}