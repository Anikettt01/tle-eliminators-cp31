#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        if(s[0] != s.back())s[0] = s.back();
        cout << s << endl;
    }

    return 0;
}

