#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> prefix(n, 0), suffix(n, 0);
        set<char> seen;

        seen.clear();
        for (ll i = 0; i < n; i++) {
            seen.insert(s[i]);
            prefix[i] = seen.size();
        }

        seen.clear();
        for (ll i = n - 1; i >= 0; i--) {
            seen.insert(s[i]);
            suffix[i] = seen.size();
        }

        ll ans = 0;
        for (ll i = 0; i < n - 1; i++) {
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}
