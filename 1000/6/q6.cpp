#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> v(n);
        long long total_count = 0; // Store the total valid subarrays count

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int i = 0;

        while (i < n) {
            int j = i;
            long long count = 0; // Count the length of a valid segment

            while (j < n && v[j] <= q) {
                count++;
                j++;
            }

            // If a valid segment is found, calculate the number of subarrays
            if (count >= k) {
                total_count += (count - k + 1) * (count - k + 2) / 2;
            }

            // Move to the next segment
            i = j + 1;
        }

        cout << total_count << endl;
    }

    return 0;
}