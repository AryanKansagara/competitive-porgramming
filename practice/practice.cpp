#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"


void merge(int *arr, int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid and j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
}


void merge_sort(int *arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
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
    int arr[] = {5, 3, 23, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
