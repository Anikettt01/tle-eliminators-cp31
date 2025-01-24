#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v(n); // Store {value, original_index}
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            v[i] = {value, i + 1}; // Store 1-based index
        }

        vector<pair<int, int>> ans;

        for (int i = 0; i < n; i++) {
            if (v[i].first % k == 0) {
                ans.push_back({k, -i});
            } else {
                ans.push_back({v[i].first % k, -i});
            }
        }

        sort(ans.begin(), ans.end());

        for (int i = n - 1; i >= 0; i--) {
            cout << abs(ans[i].second) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}