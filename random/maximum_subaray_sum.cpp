#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int array[8] = { -1, 2, 4, -3, 5, 2, -5, 2};
	int best = 0;
	// int n = sizeof(array);
	int n = sizeof(array) / sizeof(array[0]);
	for (int a = 0; a < n; a++) {
		for (int b = a; b < n; b++) {
			int sum = 0;
			for (int k = a; k <= b; k++) {
				sum += array[k];
			}
			best = max(best, sum);
		}
	}
	cout << best << endl;

	// approach 2
	for (int a = 0; a < n; a++) {
		int sum = 0;
		for (int b = a; b < n; b++) {
			sum += array[b];
			best = max(best, sum);
		}
	}
	cout << best << endl;
}