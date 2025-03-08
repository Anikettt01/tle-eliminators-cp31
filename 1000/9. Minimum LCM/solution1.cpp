// TLE ON 3rd 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll start = 1;
        ll end = n-1;
        ll ans1 = 0;
        ll ans2 = 0;
        ll mini = LLONG_MAX;
        while(start <= end){
            if(lcm(start, end) < mini){
                ans1 = start;
                ans2 = end;
                mini = lcm(start, end);
            }
            start++;
            end--;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    
    return 0;
}


