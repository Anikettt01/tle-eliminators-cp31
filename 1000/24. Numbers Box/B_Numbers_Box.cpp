#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        int sum = 0, minAbs = 101, negativeCount = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                sum += abs(grid[i][j]);
                if (grid[i][j] < 0) {
                    negativeCount++;
                }
                minAbs = min(minAbs, abs(grid[i][j]));
            }
        }

        if (negativeCount % 2 != 0) {
            sum -= 2 * minAbs;
        }

        cout << sum << endl;
    }
    return 0;
}