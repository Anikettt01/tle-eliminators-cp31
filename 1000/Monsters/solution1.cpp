// TLE ON 4TH
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vll arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<pair<ll, ll>> monsters;
        for (int i = 0; i < n; i++) {
            monsters.push_back({arr[i], i});
        }

        vector<ll> ans;

        while (monsters.size() > 0) {
            ll max_health_index = -1;
            ll max_health = -1;
            
            for (int i = 0; i < monsters.size(); i++) {
                if (monsters[i].first > max_health) {
                    max_health = monsters[i].first;
                    max_health_index = i;
                }
            }
            monsters[max_health_index].first -= k;
            if (monsters[max_health_index].first <= 0) {
                ans.push_back(monsters[max_health_index].second + 1); 
                monsters.erase(monsters.begin() + max_health_index);
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
