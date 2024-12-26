#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        long long maxSum = (k * (2 * n - k + 1)) / 2;
        long long minSum = (k * (k + 1)) / 2;
        if (x >= minSum && x <= maxSum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
