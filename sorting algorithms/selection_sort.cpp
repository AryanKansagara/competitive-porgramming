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

int find_min(vector<int> &v, int start)
{
	int min_index = start;
	int n = v.size();
	for (int i = start + 1; i < n; i++)
	{
		if (v[i] < v[min_index])
		{
			min_index = i;
		}
	}
	return min_index;
}


void selection_sort(vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		int min_idx = find_min(v, i);
		if (i != min_idx)
		{
			swap(v[i], v[min_idx]);
		}
	}
}


int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	// vector<int> v = {7, 2, 64, 21};
	vector<int> v;
	int x;
	while (cin >> x)
	{
		v.push_back(x);
	}
	selection_sort(v);
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
