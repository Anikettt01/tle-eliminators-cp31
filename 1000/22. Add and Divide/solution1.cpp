#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin >> a >> b;
        ll ans = LLONG_MAX;
        ll count =0 ;
        for(ll i=0;i*i<=a;i++){
            if(b==1 && i==0)continue;
            count = i;
            ll c = a;
            while(c){
                c = c/(b+i);
                count++;
            }
            ans = min(ans,(ll)count);

        }
        cout << ans << endl;
    }
    
    return 0;
}