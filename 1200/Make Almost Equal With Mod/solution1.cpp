#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(vll &arr){
    // int i=1;
        ll ans = 2;
        while(true){
            unordered_set<ll> st;
            for(ll x:arr){
                st.insert(x%ans);
            }
            if(st.size()==2){
                cout<<ans<<endl;
                return;
            }
            // if(ans!=-1){
            //     break;
            // }
            // i++;
            ans*=2;
        }
        cout<<ans<<endl;
    }

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vll arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        helper(arr);
    }
    return 0;
}