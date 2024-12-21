#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (count(arr.begin(), arr.end(), 0) == n){
            cout << 0 << endl;
            continue;
        }

        int nonZeroGroups = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] != 0 && (i == 0 || arr[i - 1] == 0)) {
                nonZeroGroups++;
            }
        }

        if (nonZeroGroups == 1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
