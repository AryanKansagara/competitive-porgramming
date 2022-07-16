#include<bits/stdc++.h>
using namespace std;
int gridTraveler(int m, int n, vector<int>&v)
{
	if (n == 1 && m == 1) return 1;
	if (n == 0 || m == 0) return 0;
	if (v[n] != -1) return v[n];
	int ans;
	ans = gridTraveler(m, n - 1, v) + gridTraveler(m - 1, n, v);
	v[n] = ans;
	return ans;

}

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define wx while(x--)
#define lint long long int

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	cin >> m >> n;
	vector<int>v(n + 1, -1);
	cout << gridTraveler(m, n, v) << endl;


	return 0;
}