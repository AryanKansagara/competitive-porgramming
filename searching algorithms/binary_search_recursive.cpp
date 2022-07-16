#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void binary_search_recursive(int start, int end, vector<int> &arr, int target)
{
	// recursively
	if (start <= end)
	{
		int mid = start + (end - start) / 2;
		if (arr[mid] == target)
		{
			cout << mid << endl;
			return;
		}
		if (arr[mid] < target)
		{
			binary_search_recursive(mid + 1, end, arr, target);
		}
		else
		{
			binary_search_recursive(start, mid - 1, arr, target);
		}
	}
	return;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> arr = {1, 2, 3, 4, 5};
	int n = arr.size();
	binary_search_recursive(0, n - 1, arr, 3);

	return 0;
}
