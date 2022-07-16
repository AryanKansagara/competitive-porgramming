


// ================================================================================
// SCHEDULING PROBLEM
// --------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	int n;
	pair<int, int>[] events;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		events = make_pair(y, x);
	}
	sort(events, events + n);
	int currEventEnd = -1;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (events[i].second >= currEventEnd)
		{
			currEventEnd = events[i].first;
			ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	solve();

	return 0;
}