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
        vll a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        unordered_map<ll, ll> mp;
        for(int i: a) {
            mp[i]++;
        }
        bool check = false;
        for(auto i:mp){
            if(i.second>1){
                check = true;
                break;
            }
        }
        if(check) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        } 
    }
    
    return 0;
}