// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long int

// void solve()
// {
// 	ll l;
// 	cin >> l;
// 	string s;
// 	cin >> s;
// 	ll atleast = 0;
// 	if (l % 2 == 0)
// 		atleast = l / 2;
// 	else
// 		atleast = (l + 1) / 2;
// 	ll good = 0;
// 	ll bad = 0;
// 	for (int i = 0; i < atleast; i++)
// 	{
// 		if (s[i] == '1')
// 			good++;
// 		else if (s[i] == '0')
// 			bad++;
// 	}
// 	if (good >= bad)
// 	{
// 		cout << "YES";
// 		return;
// 	}
// 	for (int i = 0; i < l; i++)
// 	{
// 		if (s[i] == '1')
// 		{
// 			good++;
// 		}
// 		if (s[i] == '0')
// 		{
// 			// s[i]==0;
// 			bad++;
// 		}
// 		else if (i >= atleast)
// 		{
// 			if (good >= bad)
// 			{
// 				cout << "YES";
// 				return;
// 			}
// 			// cout<<"YES";
// 			// return;
// 		}
// 		// else if (i == atleast && good >= bad)
// 		// {
// 		// 	cout << "YES";
// 		// 	return;
// 		// }

// 	}
// 	if (good >= bad)
// 	{
// 		cout << "YES";
// 		return;
// 	}
// 	else
// 	{
// 		cout << "NO";
// 		// return;
// 	}
// }
// // 	if(l%2==0)
// // 	{
// // 		for(int i=0;i<l/2;i++)
// // 		{
// // 			if(s[i]==1)
// // 				good++;
// // 			else
// // 				bad++;
// // 		}
// // 		if(good>=bad)
// // 		{
// // 			cout<<"YES";
// // 			return;
// // 		}
// // 		else
// // 		{
// // 			for(int i=0;i<l;i++)
// // 			{
// // 				if(s[i]==1)
// // 					good++;
// // 				else
// // 					bad++;
// // 			}
// // 			if(good>=bad)
// // 			{
// // 				cout<<"YES";
// // 				return;
// // 			}
// // 		}
// // 	}
// // 	else
// // 	{
// // 		for(int i=0;i<l;i++)
// // 		{
// // 			if(s[i]==1)
// // 			{
// // 				good++;
// // 			}
// // 			else if(s[i]==0)
// // 			{

// // 			}
// // 		}
// // 	}
// // 	if(good<bad)
// // 	{
// // 		cout<<"NO";
// // 		return;
// // 	}
// // }

// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL); cout.tie(NULL);

// 	ll t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		solve();
// 		cout << "\n";
// 	}

// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	ll l;
	cin >> l;
	string s;
	cin >> s;
	ll good = 0;
	ll bad = 0;
	int flag = 0;
	for (int i = 0; i < l; i++)
	{
		if (s[i] == '1')
		{
			good++;
		}
		else
		{
			bad++;
		}
		if (good >= bad)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}