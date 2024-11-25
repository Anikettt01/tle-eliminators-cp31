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
        vi arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int countPos = count(arr.begin(),arr.end(),1);
        int countNeg  = count(arr.begin(),arr.end(),-1);
        ll ans = 0;
        while (countNeg > countPos || countNeg % 2 == 1)
        {
            ans++;
            countNeg--;
            countPos++;
        }
        cout << ans <<endl;
    }
    return 0;
}