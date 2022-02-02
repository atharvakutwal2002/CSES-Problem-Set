#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int ma = 1;
    int current = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            current++;
            ma = max(current, ma);
        }
        else
        {
            ma = max(ma, current);
            current = 1;
        }
    }

    cout << ma;

    return 0;
}