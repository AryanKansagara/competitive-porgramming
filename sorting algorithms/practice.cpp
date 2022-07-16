#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int binary_search(vector<int>&arr, int target)
{
	int n = arr.size();
	int start = 0;
	int end = n - 1;
	int mid;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] > target)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return -1;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
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
	cout << binary_search(arr, target);

	return 0;
}
