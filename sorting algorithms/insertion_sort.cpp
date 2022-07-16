#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll        long long int
#define ld        long double
#define mod             1000000007
#define inf             1e18
#define endl      "\n"
#define pb        emplace_back
#define vi              vector<ll>
#define vs        vector<string>
#define pii             pair<ll,ll>
#define ump       unordered_map
#define mp        map
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define ff        first
#define ss        second
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b)   for(int i=(a);i<=(b);i++)
#define looprev(i,a,b)  for(int i=(a);i>=(b);i--)


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

void insertion_sort(vector<int> &arr)
{
	int n = arr.size();
	int i;
	for (i = 1; i < n; i++)
	{
		int el = arr[i];//this is the element we need to find the correct position for
		int j = i - 1;
		while (j >= 0 and arr[j] > el)
		{
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = el;
	}
}


int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	vector<int> v = {23, 12, 41, 2, 4, 1};
	insertion_sort(v);
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
