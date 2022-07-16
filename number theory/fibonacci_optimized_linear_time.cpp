#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// O(n) approach
int fib(int n)
{
	int a = 0, b = 1, c, i;
	if ( n == 0)
		return a;
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}♣
// O(1) approach
int fib2(int n) {
	double phi = (1 + sqrt(5)) / 2;
	return round(pow(phi, n) / sqrt(5));
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	cout << fib(n) << "\n";
	cout << fib2(n);
	return 0;
}
