#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin>>n>>m;
        // vll a(n),b(n),c(n);
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        // for(int i=0;i<n;i++){
        //     cin>>b[i];
        // }
        // for(int i=0;i<n;i++){
        //     cin>>c[i];
        // }
        vector<vector<ll>> arr(n,vector<ll>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ll sum = 0;
                for(int k=0;k<m;k++){
                    sum += abs(arr[i][k]-arr[j][k]);
                }
                ans+=sum;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}