#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll maxB=0;
        for(int i=0;i<n;i++){
            maxB+=(a[i]+x-1)/x;
        }
        ll minB = (sum+x-1)/x;
        cout<<minB<<" "<<maxB<<endl;
    }
    
    return 0;
}