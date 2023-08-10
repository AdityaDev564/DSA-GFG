// Sum of n natural numbers using recursion

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sum(n);
    return 0;
}