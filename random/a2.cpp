
/* CODER::==>ARYAN KANSAGARA
  CF HANDLE:=>Good_Devil
-----------------------------------------------*/


#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void solve()
{
	long double r, x, y;
	cin >> r >> x >> y;
	long double dis = x * x + y * y;
	long double f = sqrt(dis);
	long double ans = f / r;
	if (dis == r)
	{
		cout << 1;
		return;
	}
	else if (dis <= 2 * r and dis != r)
	{
		cout << 2;
		return;
	}
	cout << ceil(ans);
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



