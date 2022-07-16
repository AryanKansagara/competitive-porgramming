
/* CODER::==>ARYAN KANSAGARA
  CF HANDLE:=>Good_Devil
-----------------------------------------------*/


#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void solve()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a + c == 180 and b + d == 180)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << endl;
	}
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



