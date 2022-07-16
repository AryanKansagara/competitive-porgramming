#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void  InsertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    InsertionSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }


    return 0;
}
