#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int padovan(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return padovan(n - 2) + padovan(n - 3);
}

//another approach
int pad(int n)
{
	int p1 = 1, p2 = 1, p3 = 1, p4 = 1;
	for (int i = 3; i <= n; i++)
	{
		p4 = p1 + p2;
		p1 = p2;
		p2 = p3;
		p3 = p4;
	}
	return p4;
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
	cout << padovan(n) << "\n";
	cout << pad(n);

	return 0;
}
