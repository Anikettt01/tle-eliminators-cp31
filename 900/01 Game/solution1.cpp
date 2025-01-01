#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int zeroCount = count(s.begin(), s.end(), '0');
        int oneCount = s.size()-zeroCount;
        int maxMoves = min(zeroCount, oneCount);
        if(maxMoves%2==0) cout << "NET" << endl;
        else cout << "DA" << endl;
    }
    
    return 0;
}