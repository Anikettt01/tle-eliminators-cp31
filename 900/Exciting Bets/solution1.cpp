#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long long int lli;

void helper(lli a, lli b) {
    if (a == b) {
        cout << "0 0" << endl;
        return;
    }
    lli diff = abs(a - b);
    lli min_moves = min(a % diff, diff - (a % diff));
    cout<<diff<<" "<<min_moves<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        lli a, b;
        cin >> a >> b;
        helper(a,b);
    }

    return 0;
}

