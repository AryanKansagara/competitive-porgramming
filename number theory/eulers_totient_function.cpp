#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

int gcd(int a, int b)
{
	if (a == 0)
	{
		return b;
	}
	return gcd(b % a, a);
}

int phi(int n)
{
	int cnt = 1;
	for (int i = 2; i < n; i++)
	{
		if (gcd(i, n) == 1)
			cnt++;
	}
	return cnt;
}

int phi2(int n)
{

	// Initialize result as n
	float result = n;

	// Consider all prime factors of n
	// and for every prime factor p,
	// multiply result with (1 - 1/p)
	for (int p = 2; p * p <= n; ++p)
	{

		// Check if p is a prime factor.
		if (n % p == 0)
		{

			// If yes, then update n and result
			while (n % p == 0)
				n /= p;

			result *= (1.0 - (1.0 / (float)p));
		}
	}

	// If n has a prime factor greater than sqrt(n)
	// (There can be at-most one such prime factor)
	if (n > 1)
		result *= (1.0 - (1.0 / (float)n));

	return (int)result;
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
	cout << phi(n) << endl;
	cout << phi(n) << endl;
	return 0;
}
