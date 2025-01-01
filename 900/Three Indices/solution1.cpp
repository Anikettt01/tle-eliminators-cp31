#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(vi a) {
    int n = a.size();
    for (int i = 1; i < n-1; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vi a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        helper(a);
    }
    
    return 0;
}