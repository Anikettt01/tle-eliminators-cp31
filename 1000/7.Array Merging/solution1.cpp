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
        cin>>n;
        vll a(n), b(n);
        unordered_map<ll, ll> mp1, mp2;
        
        cin >> a[0];
        int counter = 1;
        mp1[a[0]] = 1;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] == a[i-1]) {
                counter++;
            } else {
                counter = 1;
            }
            mp1[a[i]] = max(mp1[a[i]], (ll)counter);
        }
        counter = 1;
        cin >> b[0];
        mp2[b[0]] = 1;
        for (int i = 1; i < n; i++) {
            cin >> b[i];
            if (b[i] == b[i-1]) {
                counter++;
            } else {
                counter = 1;
            }
            mp2[b[i]] = max(mp2[b[i]], (ll)counter);
        }

        set<ll> elements;
        for (int i = 0; i < n; i++) {
            elements.insert(a[i]);
            elements.insert(b[i]);
        }

        ll ans = 0;
        for (auto e: elements) {
            ans = max(ans, mp1[e] + mp2[e]);
        }

        cout << ans << endl;
    }
    
    return 0;
}
