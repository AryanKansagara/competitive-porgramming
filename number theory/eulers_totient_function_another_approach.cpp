#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void Totient(int n)
{
	long long int phi[n + 1];
	for (int i = 1; i <= n; i++)
	{
		phi[i] = i;//initializing to show no computation has occured
	}
	for (int p = 2; p <= n; p++)
	{
		if (phi[p] == p)
		{
			phi[p] = p - 1;//phi of a prime number;
			// update the values of phi for multiples of phi
			for (int i = 2 * p; i <= n; i += p)
			{
				phi[i] = (phi[i] / p) * (p - 1);
			}
		}
	}
	//we can now print the totient of all numbers less than equal to n
	for (int i = 1; i <= n; i++)
		cout << "Totient of " << i << " is " << phi[i] << endl;
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
	Totient(n);

	return 0;
}
