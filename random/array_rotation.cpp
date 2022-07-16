#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 100000007
void solve()
{
	ll n;
	cin >> n;
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a = (a + temp + mod) % mod;
	}
	int q;
	cin >> q;
	while (q--)
	{
		a = (a * 2) % mod;
		cout << a << "\n";
	}

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