#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	int m, s;
	cin >> m >> s;
	if (m < s)
	{
		cout << 0;
		return;
	}
	int n = 0;
	while (m > 0)
	{

		if (m < s)
		{
			break;
		}
		m = m - s;

		n++;
	}
	cout << n;
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
	// solve();



	return 0;
}