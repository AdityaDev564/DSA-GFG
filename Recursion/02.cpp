// Print N to 1 without using loop

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printTillN(int N)
{
    // Write Your Code here
    if (N == 0)
    {
        return;
    }
    printTillN(N - 1);
    cout << N << " ";
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printTillN(N);
    return 0;
}