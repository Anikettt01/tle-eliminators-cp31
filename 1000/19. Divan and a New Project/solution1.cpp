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
        cin >> n;
    
        vector<ll> arr(n);
        for (int i=0;i<n;i++) {
            cin >> arr[i];
        }

        vector<pair<int, int>> freq;
        for (int i = 0; i < n; ++i) {
            freq.push_back({arr[i], i});
        }

        sort(freq.rbegin(), freq.rend());

        vector<int> ans(n + 1);
        ll mini = 0;
        int left = -1;
        int right = 1;
        
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                ans[freq[i].second + 1] = right;
                mini += 2LL * right * freq[i].first;
                right++;
            }
            else {
                ans[freq[i].second + 1] = left;
                mini += 2LL * -left * freq[i].first;
                left--;
            }
        }

        cout << mini << endl;
        for (int x : ans) {
            cout << x << " ";
        }
        cout <<endl;
        }

    return 0;
}
