//this code was not done by me, I have taken it from youtube channel
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> v;  // Store second smallest elements
        long long mini = LLONG_MAX;  // Store the smallest element across all arrays

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            vector<long long> a(m);  // Store elements of the current array
            for (int j = 0; j < m; j++) {
                cin >> a[j];
            }

            sort(a.begin(), a.end());  // Sort the current array

            long long min_ele = a[0];  // First element is the minimum of the array
            mini = min(mini, min_ele);  // Update the global minimum

            if (m > 1) {
                v.push_back(a[1]);  // Push the second smallest element if it exists
            }
        }

        // Calculate the beauty using the formula
        long long beauty = mini + accumulate(v.begin(), v.end(), 0LL) - *min_element(v.begin(), v.end());
        cout << beauty << endl;
    }

    return 0;
}