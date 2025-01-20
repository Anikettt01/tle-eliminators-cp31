#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vll arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int ans=1;
        int flag = 0;
        if(n==1) {
            cout<<1<<endl;
            continue;
        }
        for(ll i=1;i<n;i++) {
            if(arr[i-1] > arr[i] && flag!=1) {
                ans++;
                flag = 1;
            }
            else if(arr[i-1] < arr[i] && flag!=-1) {
                ans++;
                flag = -1;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}