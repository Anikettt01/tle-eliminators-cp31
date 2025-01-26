#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s+=s;
        vector<int> nearG(2 * n, -1);
        int lastG = -1;
        for (int i = 2 * n - 1; i >= 0; --i) {
            if (s[i] == 'g') {
                lastG = i;
            }
            nearG[i] = lastG;
        }

        int maxTime = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c && nearG[i] != -1) {
                maxTime = max(maxTime, nearG[i] - i);
            }
        }

        cout << maxTime << endl;
    }
    
    return 0;
}