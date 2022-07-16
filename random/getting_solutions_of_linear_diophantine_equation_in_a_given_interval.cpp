#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void shift_solution(int &x, int&y, int a, int b, int cnt)
{
	x += cnt * b;
	y -= cnt * a;
}
int find_all_solutions(int a, int b, int minx, int maxx, int miny, int maxy)
{
	int x, y, g;
	if ( != find_all_solutions(a, b, c, x, y, g))
	{
		return 0;
	}
	int sign_a = a > 0 ? +1 : -1;
	int sign_b = b > 0 ? +1 : -1;
	shift_solution(x, y, a, b, (minx - x) / b);

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);



	return 0;
}