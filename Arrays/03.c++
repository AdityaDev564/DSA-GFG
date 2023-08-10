// Second largest element in an array

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int secondLargestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest)
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 10, 200, 30, 40, 50, 100, 80, 90};
    cout << secondLargestElement(arr, 9) << endl;
    return 0;
}