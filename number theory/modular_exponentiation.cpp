// given x,y,p ->calculate x^y%p
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// O(log y)
int power(int x, int y)
{

	// Initialize answer
	int res = 1;

	// Check till the number becomes zero
	while (y)
	{

		// If y is odd, multiply x with result
		if (y % 2 == 1)
		{
			res = (res * x);
		}
		y = y / 2;
		x = (x * x);
	}
	return res;
}
//now for modular exponentiation we can use the fundamental property that says :
//(ab)mod p = ((a mod p)(b mod p)) mod p

int exponentiation(long long x, unsigned int y, int p)
{
	int res = 1;     // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	if (x == 0) return 0; // In case x is divisible by p;

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int x, y, p;
	cin >> x >> y >> p;
	// cout << power(x, y) << "\n;

	cout << exponentiation(x, y, p);

	return 0;
}
