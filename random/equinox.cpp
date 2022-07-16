#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// char ar[][8] = {"e", "q", "u", "i", "n", "o", "x"};

void solve()
{
	ll n, a, b;
	cin >> n >> a >> b;
	ll anu = 0;
	ll sar = 0;
	for (ll i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (ll j = 0; j < 7; j++)
		{
			if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'I' || s[0] == 'U' || s[0] == 'O' || s[0] == 'X' || s[0] == 'N')
			{
				sar += a;
			}
			else
			{
				anu += b;
			}
		}
	}
	if (anu > sar)
	{
		cout << "ANURADHA";
	}
	else if (sar > anu)
	{
		cout << "SARTHAK";
	}
	else
	{
		cout << "DRAW";
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}


	return 0;
}