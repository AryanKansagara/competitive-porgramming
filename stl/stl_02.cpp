#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define wx while(x--)
#define lint long long int

void printVec(vector<int>v)
{
	cout << "size: " << v.size() << endl;
	//v.size()->O(1)
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
//vector locally declare -> max limit 10^5
//globally declare -> max limit 10^7
	int a[10];//array of fixed size
	vector<int> v;//dynamic as we add the integers the size is manipulated on its own
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		printVec(v);//this shows that vector is dynamic
		v.pb(x);
	}
	printVec(v);
	return 0;
}