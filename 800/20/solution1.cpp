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
        int n;
        cin>>n;
        vll arr(n);
        ll helper = n+1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cout<<helper-arr[i]<<" ";
        } 
        cout<<endl;     
    }
    return 0;
}