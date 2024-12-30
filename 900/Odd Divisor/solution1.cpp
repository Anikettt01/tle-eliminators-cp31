#include <iostream>
using namespace std;

bool helper(long long n) {
    if (n % 2 == 1) return true;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n > 1;
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
