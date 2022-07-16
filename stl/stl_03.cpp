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
//we pass by reference so the actual vector is passed and a vector is not duplicated which saves time being O(1) from O(n)
void printVec(vector<int>&v)
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
	//vector syntax
	// vector<int> v(default size,default value)
	vector<int> v(9, 1);
	v.push_back(7);
	printVec(v);
	v.pop_back();//removes the last element
	printVec(v);//O(1)
	vector<int> v2 = v;//O(n) //we can copy vectors
	//here also we made a copy for actual vector we have to write &v2=v
	v2.push_back(123);
	printVec(v2);
	return 0;
}