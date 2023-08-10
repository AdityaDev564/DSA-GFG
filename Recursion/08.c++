// Tower of Hanoi

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void ToH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    ToH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    ToH(n - 1, B, A, C);
}

void towerOfHanoi(int n, char src, char helper, char dest)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, src, dest, helper);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, src, dest);
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    ToH(n, 'A', 'B', 'C');
    return 0;
}