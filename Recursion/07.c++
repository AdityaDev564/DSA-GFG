// Generate Subsets

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void subsets(string &s, string curr = "", int i = 0)
{
    if (i == s.length())
    {
        cout << '"' << curr << '"'
             << " ";
        return;
    }
    subsets(s, curr, i + 1);
    subsets(s, curr + s[i], i + 1);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    subsets(s);
    return 0;
}