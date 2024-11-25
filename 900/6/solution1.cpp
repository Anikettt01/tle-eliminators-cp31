#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = 1;
        for (long long i = 2; n % i == 0 && i <= n; i++) {
            ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
