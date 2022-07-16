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

int solve(char x[], char y[], int m, int n)
{
	int longest[m + 1][n + 1];
	int len = 0;
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
			{
				longest[i][j] = 0;
			}
			else if (x[i - 1] == y[j - 1])
			{
				longest[i][j] = longest[i - 1][j - 1] + 1;
				if (len < longest[i][j])
				{
					len = longest[i][j];
				}
			}
			else
			{
				longest[i][j] = 0;
			}

		}
	}
	return len;
}



int main(int argc, char const *argv[]) {
	clock_t begin = clock();
	file_i_o();
	//Code here......
	char x[] = "helloworld";
	char y[] = "worldbook";
	int m = strlen(x);
	int n = strlen(y);
	int ans = solve(x, y, m, n);
	cout << ans;


#ifndef ONLINE_JUDGE
	clock_t end  = clock();
	cout << "\n\nEXECUTED IN: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}
