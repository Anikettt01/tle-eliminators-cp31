#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int count_1 = 0, count_0 = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count_1++;
            } else {
                count_0++;
            }
        }

        if (count_1 == count_0) {
            cout << 0 << endl;
            continue;  
        }

        int i = 0;  
        for (; i < n; i++) {
            if (s[i] == '1') {
                if (count_0 > 0) {
                    count_0--;
                } else {
                    break;
                }
            } else {
                if (count_1 > 0) {
                    count_1--;
                } else {
                    break;
                }
            }
        }

        cout << n - i << endl;
    }

    return 0;
}