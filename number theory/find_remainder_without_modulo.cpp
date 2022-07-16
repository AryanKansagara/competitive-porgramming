#include<bits/stdc++.h>
using namespace std;

#define ll long long int

long long int remainder(ll dividend, ll divisor)
{
	return dividend - (divisor * (dividend / divisor));
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int dividend, divisor;
	cin >> dividend >> divisor;
	cout << remainder(dividend, divisor);

	return 0;
}
