#include<bits/stdc++.h>
using namespace std;

#define ll long long int

unsigned long long int catalan(unsigned int n)
{
	if (n <= 1)
	{
		return 1;
	}
	unsigned long int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += catalan(i) * catalan(n - 1 - i);
	}
	return ans;
}
unsigned long int binomialCoeff(unsigned int n,
                                unsigned int k)
{
	unsigned long int res = 1;

	// Since C(n, k) = C(n, n-k)
	if (k > n - k)
		k = n - k;

	// Calculate value of [n*(n-1)*---*(n-k+1)] /
	// [k*(k-1)*---*1]
	for (int i = 0; i < k; ++i) {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

// A Binomial coefficient based function to find nth catalan
// number in O(n) time
unsigned long int catalanUsingBinomial(unsigned int n)
{
	// Calculate value of 2nCn
	unsigned long int c = binomialCoeff(2 * n, n);

	// return 2nCn/(n+1)
	return c / n + 1;

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
		cout << catalan(n);

		return 0;
	}
