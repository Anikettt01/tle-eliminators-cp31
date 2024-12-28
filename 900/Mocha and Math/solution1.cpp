#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int helper(vector<ll>& arr, int n) {
    ll minMaxValue = LONG_LONG_MAX;
    for (int l = 0; l < n; ++l) {
        ll current = arr[l];
        for (int r = l; r < n; ++r) {
            current &= arr[r]; 
            ll maxVal = 0;
            for (int i = 0; i < n; ++i) {
                maxVal = max(maxVal, arr[i] & current); 
            }
            minMaxValue = min(minMaxValue, maxVal);
        }
    }
    
    return minMaxValue;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<helper(arr, n)<<endl;
    }
    
    return 0;
}