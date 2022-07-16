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

void bubble_sort(vector<int> &arr)
{
	int n = arr.size();
	for (int i = 0; i < n - 1; i++)
	{
		bool is_Swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				is_Swapped = true;
			}
		}
		if (not is_Swapped)
		{
			break;
		}
	}
}


int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	vector<int> v = {23, 12, 41, 2, 4, 1};
	bubble_sort(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

#ifndef ONLINE_JUDGE
	clock_t end  = clock();
	cout << "\n\nEXECUTED IN: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}
