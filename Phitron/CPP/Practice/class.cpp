#include <iostream>
#include <algorithm>

using namespace std;

void hasTripletSum(int arr[], int n, int sum) {
    sort(arr, arr + n); // Sort the array in ascending order

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates (prevents considering the same triplet multiple times)
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int target = sum - arr[i]; // Fix the first element

        int left = i + 1, right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == target) {
                cout << "YES" << endl; // Print and exit if found
                return;
            } else if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    // If we reach here, no triplet was found
    cout << "NO" << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        hasTripletSum(arr[], N, S);
    }

    return 0;
}
