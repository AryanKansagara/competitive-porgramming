
/* CODER::==>ARYAN KANSAGARA
  CF HANDLE:=>Good_Devil
-----------------------------------------------*/


#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    string ans ;
    cin >> ans;
    map<char, int>mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (mp[ans[i]] != 1)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();

    return 0;
}



