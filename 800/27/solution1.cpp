#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, b, oneCount = 0, twoCount = 0;
        cin >> n;
        vector<ll> indices;
        
        for (ll i = 0; i < n; i++) {
            cin >> b;
            if (b == 1) {
                oneCount++;
            } else {
                twoCount++;
                indices.push_back(i + 1); 
            }
        }

        if (twoCount % 2 != 0) {
            cout << -1 << endl; 
        } else {
            if (twoCount == 0) {
                cout << 1 << endl; 
            } 
            else {
                ll middleIndex = indices.size() / 2;
                cout << indices[middleIndex - 1] << endl;
            }
        }
    }
    return 0;
}
