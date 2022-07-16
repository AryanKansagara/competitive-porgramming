//problem says that given a ,b ,c from a linear diophantine equations find if solution exists
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}


bool possibe(int a, int b, int c)
{
	int g = gcd(a, b);
	if (c % g != 0)
	{
		return false;
	}
	return true;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	if (possibe(a, b, c) == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
//NOTE:THE GENERAL SOLUTION OF X,Y = X0 + B/G*T,Y0 - A/G*T;