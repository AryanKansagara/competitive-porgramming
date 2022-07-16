#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int binomial_coefficient(int n, int k)
{
	if (k > n)
	{
		return 0;
	}
	if (k == 0 || k == n)
	{
		return 1;
	}
	return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
}
//the function can be optimized by dp

//another approach
// O(n)
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


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	cout << binomial_coefficient(n, k);

	return 0;
}
