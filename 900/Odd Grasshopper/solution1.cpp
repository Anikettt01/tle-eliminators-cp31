#include<bits/stdc++.h>
using namespace std;

long long helper1(long long x) {
    return 0;
}

long long helper2(long long x) {
    return x;
}

long long helper3(long long x) {
    return -1;
}

long long helper4(long long x) {
    return -x - 1;
}

int main() {
    int t;
    cin >> t;
    vector<long long(*)(long long)> maps = {helper1, helper2, helper3, helper4};

    while (t--) {
        long long x, n;
        cin >> x >> n;
        long long distance = maps[n % 4](n);

        cout << (x % 2 == 0 ? x - distance : x + distance) << endl;
    }

    return 0;
}
