#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int linear_search(vector<int> &arr, int target)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == target)
		{
			return i;
		}
	}
	return -1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> arr;
	int target;
	cin >> target;
	int x;
	while (cin >> x)
	{
		arr.push_back(x);
	}

	cout << linear_search(arr, target) << endl;
	return 0;
}
