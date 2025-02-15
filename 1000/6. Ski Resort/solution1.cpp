#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(){
    ll n,k,q;
        cin >> n >> k >> q;
        vll arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
         ll ans = 0;
        // int days = 0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]<=q) days++;
        // }
        // if(days<k){
        //     cout << 0 << endl;
        //     return;
        // }
        // else if(days==k){
        //     cout << 1 << endl;
        //     return;
        // }
        // else{
             int consecutive = 0;
       
         for (ll i = 0; i < n; i++) {
            if (arr[i] <= q) {
                consecutive++;
            } else {
                if (consecutive >= k) {
                    ans += (consecutive - k + 1) * (consecutive - k + 2) / 2;
                }
                consecutive = 0;
            }
        }

        if (consecutive >= k) {
            ans += (consecutive - k + 1) * (consecutive - k + 2) / 2;
        }
        // }
       
        cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        helper();
    }
    
    return 0;
}