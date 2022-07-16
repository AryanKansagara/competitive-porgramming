#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<bool> taken(m, false);
		while (n--)
		{
			int topic;
			cin >> topic;
			topic--;
			taken[topic] = true;
		}
		bool prize = false;
		for (int i = 0; i < m; i++)
		{
			if (!taken[i]) prize = true;
		}
		if (prize) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}