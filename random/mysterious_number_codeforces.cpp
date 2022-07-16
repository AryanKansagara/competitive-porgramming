#include<bits/stdc++.h>
using namespace std;

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

int f(int n1, int n2, int n)
{
	if (n == 0) return n1;
	else if (n == 1) return n2;
	return f(n1 , n2 , n - 1 ) + f(n1 , n2 , n - 2 );


}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n1, n2, n;
	cin >> n1 >> n2 >> n;
	cout << f(n1, n2, n);
	// int n, m;
	// cin >> n >> m;
	// string str;
	// str = to_string(m);
	// reverse(str.begin(), str.end());
	// m = stoi(str);
	// cout << n + m << endl;
	// return 0;

	//mysterious number 2:



}