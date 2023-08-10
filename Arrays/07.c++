// Trapping RainWater problem

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int trappingRainwater(int arr[], int n)
{
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
            lmax = max(lmax, arr[j]);
        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
            rmax = max(rmax, arr[j]);
        ans += (min(lmax, rmax)) - arr[i];
    }
    return ans;
}

// Efficient Solution
int getWater(int arr[], int n)
{
    int ans = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        ans += (min(lmax[i], rmax[i])) - arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;
    cout << trappingRainwater(arr, n) << endl;
    return 0;
}