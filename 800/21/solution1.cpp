#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        vll arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll ans = 0;
        ll i=0;
        for(ll j=0;j<n;j++){
            if(arr[j]==1){
                i = j+1;
            }
            else{
                ans = max(ans,j-i+1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}