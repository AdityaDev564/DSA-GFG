// Sum of digits using recursion

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Sum of digits of " << n << " is: " << sumOfDigits(n);
    return 0;
}