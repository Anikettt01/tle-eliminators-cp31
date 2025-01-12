#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,p;
        cin >> n >> p;
        vector<ll>arr1(n),arr2(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        vector<pair<ll, ll>> shares;
        for (int i = 0; i < n; i++) {
            shares.push_back({arr2[i], arr1[i]});
        }
        sort(shares.begin(), shares.end());
        ll ans = p;
        for (int i = 0; i < n - 1; i++) {
            ans += shares[i].first;
        }
        cout << ans << endl;
    }
}