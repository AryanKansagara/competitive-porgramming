#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

int ternary_search(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int m1 = start + (end - start) / 3;
        int m2 = end - (end - start) / 3;
        if (arr[m1] == target)
        {
            return m1;
        }
        if (arr[m2] == target)
        {
            return m2;
        }
        if (arr[m1] > target)
        {
            end = m1 - 1;
        }
        else if (arr[m2] < target)
        {
            start = m2 + 1;
        }
        else
        {
            start = m1 + 1;
            end = m2 - 1;
        }
    }
    return -1;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> arr = {5, 3, 1, 24, 22};
    int target = 24;
    cout << ternary_search(arr, target);

    return 0;
}
