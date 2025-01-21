#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> arr(n, vector<ll>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        
        ll ans = 0;
        for(int j = 0; j < m; j++) {
            vector<ll> column;
            for(int i = 0; i < n; i++) {
                column.push_back(arr[i][j]);
            }
            sort(column.begin(), column.end());
            ll leftSum = 0;
            ll totalSum = 0;
            for(ll val : column) totalSum += val;
            
            for(int i = 0; i < n; i++) {
                ll currVal = column[i];
                ll rightSum = totalSum - leftSum - currVal;
                ll contribution = (i * currVal - leftSum) + (rightSum - (n-1-i) * currVal);
                ans += contribution;
                leftSum += currVal;
            }
        }
        ans /= 2;
        cout << ans << endl;
    }
    return 0;
}