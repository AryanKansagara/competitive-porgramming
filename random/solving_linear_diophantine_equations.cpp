#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b, int &x, int &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}
bool find_any_solution(int a, int b, int c, int &x, int &y)
{
	int x0, y0;
	int g = gcd(abs(a), abs(b), x0, y0);
	if (c % g )
	{
		return false;
	}
	// int x, y;

	x = x0 * (c / g);
	y = y0 * (c / g);
	if (a < 0) x = -x;
	if (b < 0) y = -y;
	return true;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, c, x, y;
	cin >> a >> b >> c;
	if (find_any_solution(a, b, c, x, y) == false)
	{
		cout << "NO SOLUTION EXITS ";
	}
	else
	{
		cout << "x = " << x << " y = " << y;
	}


	return 0;
}