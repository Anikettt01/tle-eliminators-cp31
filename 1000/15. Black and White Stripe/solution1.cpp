#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

// void helper(int i, string curr, vector<string>&all, string s, int k){
//     if(i==s.size()){
//         if(curr.size()==k){
//             all.push_back(curr);
//             return;
//         }
//         return;
//     }
//     curr.push_back(s[i]);
//     helper(i+1,curr,all,s,k);
//     curr.pop_back();
//     helper(i+1,curr,all,s,k);
// }

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int minCount = INT_MAX;
        int currentCount = 0;

        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') {
                currentCount++;
            }
        }

        minCount = currentCount;

        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'W') {
                currentCount--;
            }
            if (s[i] == 'W') {
                currentCount++;
            }
            minCount = min(minCount, currentCount);
        }

        cout << (minCount == INT_MAX ? 0 : minCount) << endl;
    }

    return 0;
}
