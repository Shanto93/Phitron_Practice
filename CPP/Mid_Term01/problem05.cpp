#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n, int target) {
    int seen[1001] = {0}; 
    for (int i = 0; i < n; i++) {
        int current_sum = target - arr[i];
        for (int j = i + 1; j < n; j++) {
            int complement = current_sum - arr[j];
            if (complement >= 0 && complement <= 1000 && seen[complement] > 0) {
                return 1;
            }
            seen[arr[j]]++;
        }
        memset(seen, 0, sizeof(seen));
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << (sum(arr, n, s) ? "YES" : "NO") << endl;
    }
    return 0;
}
