#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        if (s < k * b || s > k * b + (k - 1) * n) {
            cout << -1 << endl;
            continue;
        }

        vector<long long> a(n, 0);

        a[0] = k * b;
        s -= k * b;

        for (int i = 0; i < n && s > 0; i++) {
            long long add = min(s, k - 1);
            a[i] += add;
            s -= add;
        }

        for (long long x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}