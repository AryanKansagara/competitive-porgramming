#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, s, i;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << 0 << " " << 0;
            return 0;
        }
        else
        {
            cout << -1 << " " << -1;
            return 0;
        }
    }
    string b;
    int t;
    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }
    if (s > 0)
    {
        cout << -1 << " " << -1;
        return 0;
    }
    string a;
    for (i = m - 1; i >= 0; i--)
    {
        a += b[i];
    }
    for (i = 0; a[i] == '0'; i++);

    a[i]--, a[0]++;
    cout << a << " " << b;


    return 0;
}
