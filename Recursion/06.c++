// Rope Cutting Problem

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ropeCutting(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(ropeCutting(n - a, a, b, c), max(ropeCutting(n - b, a, b, c), ropeCutting(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    int n, a, b, c;
    cout << "Enter the value of n, a, b, c: ";
    cin >> n >> a >> b >> c;
    cout << "Maximum number of pieces that can be cut: " << ropeCutting(n, a, b, c);
    return 0;
}