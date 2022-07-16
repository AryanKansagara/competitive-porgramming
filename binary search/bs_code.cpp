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

//recursive implementation
int binary_search(int a[], int x, int l, int r)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;//this is correct beacuse here the integer will not overflow becuase if size of l==r==10^9 then it would overflow but by this formula it will be 0 and it won't overflow
		if (a[mid] == x)
			return mid;
		if (a[mid] > x)
			return binary_search(a, x, l, mid - 1);
		if (a[mid] < x)
			return binary_search(a, x, mid + 1, r);
	}
	return -1;//if element not in the array
}


int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int x;
	cin >> x;
	cout << x;
	// int n = sizeof(a) / sizeof(a[0]);
	int ans = binary_search(a, x, 0, n - 1);
	ans == -1 ? cout << " NOT in the array " : cout << " PRESENT at index " << ans;

#ifndef ONLINE_JUDGE
	clock_t end  = clock();
	cout << "\n\nEXECUTED IN: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}
