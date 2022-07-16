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
#define w(x) while(x--)
#define lint long long int
#define fr(i,n) for(int i = 0 ;i<n;i++)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//four parts:
	/*
	1. containers
	2.iterators
	3.algorithms
	4.functors

	//pair
	*/
	//pair<datatype,datatype> name_of_the_pair
	pair<int, string> p;
	// p = make_pair(2, "abc");
	p = {2, "abc"};
	cout << p.ff << " " << p.ss << endl;
	pair<int, string> &p1 = p; //we have to copy by reference ;otherwise we get address
	p1.first = 3;
	cout << p1.ff << " " << p1.ss << endl;

	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};
	//pair is used to make relation between two things
	pair<int, int> p_array[4];
	p_array[0] = {1, 2};
	p_array[1] = {2, 3};
	p_array[2] = {3, 4};
	//to swap
	swap(p_array[0], p_array[2]);
	//pair maintains the relation we dont need to maintain it ourselves
	for (int i = 0; i < 3; ++i)
	{
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}



	return 0;
}