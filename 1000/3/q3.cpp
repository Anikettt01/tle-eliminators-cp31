#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        long long p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for (long long i = 0; i < n; i++) cin >> a[i];
        for (long long i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long, long long>> residents;
        for (long long i = 0; i < n; i++) {
            residents.push_back({b[i], a[i]});
        }
        residents.push_back({p, n + 1});

        sort(residents.begin(), residents.end());

        long long total = 1, cost = p;
        long long idx = 0;

        while (total < n) {
            long long left = n - total;

            if (residents[idx].second <= left) {
                total += residents[idx].second;
                cost += residents[idx].first * residents[idx].second;
            } else {
                cost += residents[idx].first * left;
                total = n;
            }
            idx++;
        }

        cout << cost << endl;
    }

    return 0;
}