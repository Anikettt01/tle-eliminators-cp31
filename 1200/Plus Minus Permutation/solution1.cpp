#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

ll range_sum(ll l, ll r) {
    if (l > r) {
        return 0;
    }
    return (l + r) * (r - l + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll l = lcm(x, y);
        ll plus = n / x - n / l;
        ll minus = n / y - n / l;

        ll ans = range_sum(n - plus + 1, n) - range_sum(1, minus);
        cout << ans << endl;
    }
    return 0;
}
