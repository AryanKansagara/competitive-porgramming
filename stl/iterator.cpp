#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	// queue<int> q;
	// // cout << empty();
	// // cout << q.empty();
	// q.push(10);
	// cout << q.front();
	// q.push(100);
	// q.pop();
	// cout << q.front();
	// cout << q.size();
	// double ans = acos(-0.5);//inverse
	// double ans = cos(3.14159 / 3);
	// cout << ans ;
	// cout << floor(2.56);
	//for sorting a priority queue we use something like this
	// sort(v.begin(), v.end(), greater<int>());
	// we can also use some function to sort + the sort function for it to be sorted in a particular order
	// bool cmp(int a, int b)
	// {
	// 	return abs(a) > abs(b);
	// }
	// sort(v.begin(), v.end(), cmp);//this sorts according to the absolute values
	// to check is the given data structure is sorted then we use:
	// is_sorted(passing the ds)
	// vector<int> v = {1, 2, 3, 4, 5, 6};
	// auto it = find(v.begin(), v.end(), 6);
	// cout << *it << "\n";
	// cout << *(it - 1) ;//returns 6 if element to be found is 7
	// find is carried out using == operator in the range [first,last)
	// vector<int> v = {1, 2, 2, 2, 5, 6};
	// cout << count(v.begin(), v.end(), 2);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int a = count(s.begin(), s.end(), 'a');
		int b = count(s.begin(), s.end(), 'b');
		int ans = min(a, b);
		cout << ans;
		cout << "\n";
	}


	return 0;
}
