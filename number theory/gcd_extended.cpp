#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int gcdExtended(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}
	int x1, y1;
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// restoring back the values of x and y using x1 and y1
	*x = y1 - (b / a) * x1;
	*y = x1;
	return gcd;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, x, y;
	cin >> a >> b;
	cout << gcdExtended(a, b, &x, &y) << "\n";
	cout << x << " = " << x << " " << y << " = " << y << "\n";
	cout << a*x << " " << b*y << " = " << gcdExtended(a, b, &x, &y);
	return 0;
}
