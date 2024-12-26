#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            int var;
            cin >> var;
            mp[var]++;
        }
        int value = 0;
        for (auto i : mp) {
            value = max(value, i.second);
        }
        int ans = 0;
        while (value < n) {
            int d = min(n - value, value);
            ans += 1 + d;
            value += d;
        }
        cout << ans << endl;
    }
}