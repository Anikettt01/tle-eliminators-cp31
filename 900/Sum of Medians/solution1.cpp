#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vll a(n*k);
        for (int i = 0; i < n*k; i++) {
            cin>>a[i];
        }
        ll ans=0;
        int i = n*k;
        while(k--){
            i-=(n/2+1);
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}