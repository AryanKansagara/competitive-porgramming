#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	int n, w, wr;
	cin >> n >> w >> wr;
	int arr[n];
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		mp[arr[i]]++;
	}
	if (wr >= w)
	{
		cout << "YES";
		return;
	}
	else
	{
		w -= wr;
		for (int i = 0; i < n; i++)
		{
			if (mp[arr[i]] >= 2)
			{
				int cnt = mp[arr[i]];
				if (cnt % 2 == 0)
				{
					w -= cnt * arr[i];
				}
				else
				{
					w -= (cnt - 1) * arr[i];
				}
				mp[arr[i]] = 0;
			}
			if (w <= 0)
			{
				break;
			}
		}
		if (w <= 0)
		{
			cout << "YES" ;
			// return;
		}
		else
		{
			cout << "NO" ;
			// return;
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}


	return 0;
}