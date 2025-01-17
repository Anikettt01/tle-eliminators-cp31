#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> arr1, arr2, arr3;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr1.push_back({x, i});
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr2.push_back({x, i});
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr3.push_back({x, i});
        }
        sort(arr1.rbegin(), arr1.rend());
        sort(arr2.rbegin(), arr2.rend());
        sort(arr3.rbegin(), arr3.rend());
        vector<pair<int, int>> topA(arr1.begin(), arr1.begin() + 3);
        vector<pair<int, int>> topB(arr2.begin(), arr2.begin() + 3);
        vector<pair<int, int>> topC(arr3.begin(), arr3.begin() + 3);
        int ans = INT_MIN;
        for (auto a : topA) {
            for (auto b : topB) {
                for (auto c : topC) {
                    if (a.second != b.second && b.second != c.second && a.second != c.second) {
                        ans = max(ans, a.first + b.first + c.first);
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
