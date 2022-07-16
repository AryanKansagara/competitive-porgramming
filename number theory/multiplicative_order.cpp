#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int gcd(int A, int B)
{
	if (B == 0)
	{
		return A;
	}
	return gcd(B, A % B);
}
// O(n)
int morder(int a , int n)
{
	if (gcd(a, n) != 1)
	{
		return -1;
	}
	unsigned int rem = 1;
	int k = 1;
	while (k < n)
	{
		rem = (rem * a) % n;
		if (rem == 1)
			return k;
		k++;
	}
	return -1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, n;
	cin >> a >> n;
	cout << morder(a, n);

	return 0;
}
