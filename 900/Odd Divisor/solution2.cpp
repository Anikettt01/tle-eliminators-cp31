#include <iostream>
using namespace std;

bool helper(long long n) {
    return (n & (n - 1)) != 0;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n;
        cin >> n;

        if (helper(n)) cout << "YES" << endl;
         else cout << "NO" << endl;
    }

    return 0;
}
