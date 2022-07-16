#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int findMinIdx(vector<int> &arr , int i)
{
	int min_idx = i;
	while (i < arr.size())
	{
		if (arr[i] < arr[min_idx])
		{
			min_idx = i;
		}
		i++;
	}
	return min_idx;
}

void selection_sort(vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		int min_idx = findMinIdx(arr, i);
		if (i != min_idx)
		{
			swap(arr[i], arr[min_idx]);
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> arr;
	while (n--)
	{
		int el;
		cin >> el;
		arr.push_back(el);
	}
	selection_sort(arr);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
