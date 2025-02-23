#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, int> left, right;

        for (auto ch : s) {
            right[ch]++;
        }

        int score = 0;

        for (int i = 0; i < n - 1; i++) {
            left[s[i]]++;

            if (right[s[i]] == 1) {
                right.erase(s[i]); // Corrected 'ch' to 's[i]'
            } else {
                right[s[i]]--;
            }

            int ans = left.size() + right.size();
            score = max(score, ans);
        }
        
        cout << score << endl;
    }

    return 0;
}