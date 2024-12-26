#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

bool check(ll a, ll b, ll c) {
    return 2 * b == a + c;
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
        cout << "YES"<<endl;
        return;
    }

    if ((a + c) % 2 == 0 && (a + c) / 2 % b == 0) {
        cout << "YES"<<endl;
        return;
    }
    
    if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
        cout << "YES\n"<<endl;
        return;
    }
    
    cout << "NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}