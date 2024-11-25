#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vll arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int counter = count(arr.begin(),arr.end(),k);
        if(counter>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    return 0;
}