#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkPalindrome(string s, int start, int end)
{
    if (start >= end)
        return true;
    if (s[start] != s[end])
        return false;
    return checkPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    if (checkPalindrome(s, 0, s.length() - 1))
        cout << "The string is a palindrome";
    else
        cout << "The string is not a palindrome";
    return 0;
}