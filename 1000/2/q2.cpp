#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k; // Changed 'p' to 'k' for clarity

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int even = 0;
        int d = k - 1;

        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                even++;
            }

            if (v[i] % k == 0) {
                d = 0;
            } else {
                d = min(d, k - v[i] % k);
            }
        }

        if (k != 4) {
            cout << d << endl;
        } else if (even >= 2) {
            cout << 0 << endl;
        } else if (even == 1) {
            cout << min(d , 1) << endl;
        } else {
            cout << min(2 , d) << endl;
        }
    }
    return 0;
}

