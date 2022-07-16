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


void merge(int *arr, int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while (i <= mid and j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
}

void merge_sort(int *arr, int start, int end )
{
    if (start < end) {
        int mid = start + (end - start) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    //Code here......
    int arr[] = {5, 31, 123, 42, 2, 1};
    int n  = sizeof(arr) / sizeof(int);
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

#ifndef ONLINE_JUDGE
    clock_t end  = clock();
    cout << "\n\nEXECUTED IN: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}

