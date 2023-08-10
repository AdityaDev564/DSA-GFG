// Print N to 1 without using loop

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printNto1(int N)
{
    // Write Your Code here
    if (N == 0)
    {
        return;
    }
    cout << N << " ";
    printNto1(N - 1);
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printNto1(N);
    return 0;
}