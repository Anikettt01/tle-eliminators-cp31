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
        vll arr((n*(n-1))/2);
        for(ll i=0;i<(n*(n-1))/2;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        ll index=0;
        for(ll i=1;i<n;i++){
            cout<<arr[index]<<" ";
            index += (n-i); 
        }
        ll maxi = 1e9;
        cout<<maxi<<endl;
    }
    
    return 0;
}