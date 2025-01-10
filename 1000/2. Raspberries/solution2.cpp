#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(vll &v, ll n, ll k) {
    ll ans=LLONG_MAX;
    ll count=0;
    for(ll i:v){
        if(i%k==0)ans=0;
        else ans = min(ans, k-i%k);
        if(i%2==0)count++;
    }
    if(k!=4)cout<<ans<<endl;
    else if(count>=2)cout<<0<<endl;
    else if(count==1)cout<<min(ans,1LL)<<endl;
    else cout<<min(2LL,ans)<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vll v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        helper(v,n,k);
    }
    
    return 0;
}