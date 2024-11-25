#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pb push_back

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vll arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int>ans;
        ans.pb(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i] >= arr[i-1]) ans.pb(arr[i]);
            else{
                if(arr[i]-1 == 0) ans.pb(1);
                else ans.pb(arr[i]-1);
                ans.pb(arr[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i:ans){
            cout<<i<<" ";
            
        } 
        cout<<endl;
    }
    return 0;
}