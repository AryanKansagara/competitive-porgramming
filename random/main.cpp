#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> v = {1, 2, 3, 4, 5};
	// auto it = find(v.begin(), v.end(), 6);
	// cout << *(it - 1);
	// in string we can push_back(char c) same as in a vector
	stringstream numToString;
	numToString << 5;
	string val;
	numToString >> val;
	cout << val + '4';
	stringstream stringtonum ;
	stringtonum << "5";
	int n;
	stringtonum >> n;
	cout << n + 10;
	stringstream ss;
	ss << "hello world";
	int val2;
	if (ss >> val2)
	{
		cout << "read an integer";
	}
	else
	{
		cout << "next was not an integer";
	}
	return 0;
}
