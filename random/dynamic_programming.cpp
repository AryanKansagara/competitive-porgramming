#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &memo)
{
	if (n <= 2) return 1;
	//retrive
	if (memo[n] != -1) return memo[n];
	int ans = fib(n - 1, memo) + fib(n - 2, memo);
	//store
	memo[n] = ans;//ans is assigned to v[n]
	return ans;
	// return fib(n - 1) + fib(n - 2);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	// cout << fib(n);
	//using dynamic programming
	//using memoization
	//vector(default size,default value)
	vector<int> memo(n + 1, -1);
	cout << fib(n, memo);






	return 0;
}