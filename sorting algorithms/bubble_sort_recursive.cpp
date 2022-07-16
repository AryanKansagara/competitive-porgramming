#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void bubble_sort_recursive(vector<int> &arr, int i, int n)
{
	// here n is the size of the unsorted region
	if (n == 1) return;// a single element is always sorted
	if (i == n - 1)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		//now we dont need to check the last element so n-1
		bubble_sort_recursive(arr, 0, n - 1);
	}
	if (arr[i] > arr[i + 1])
	{
		swap(arr[i], arr[i + 1]);
		bubble_sort_recursive(arr, i + 1, n);
	}
}

int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	vector<int> arr = {5, 4, 3, 2, 1};
	bubble_sort_recursive(arr, 0, arr.size());
	// for (int i = 0; i < arr.size(); i++)
	// {
	// 	cout << arr[i] << " ";
	// }


#ifndef ONLINE_JUDGE
	clock_t end  = clock();
	cout << "\n\nEXECUTED IN: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}
