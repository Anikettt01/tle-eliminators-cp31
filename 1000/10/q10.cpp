#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;

        cin >> n >> c;
        string s;
        cin >> s;

        int ans = -1e9;
        int last = -1;

        s.append(s);

        for(int i = s.size();i >= 0;i--){
         if(s[i] == 'g'){
            last = i;
         }
         if(s[i] == c){
            ans = max(ans , last - i);
         }
        }
        cout << ans << endl;
    }

    return 0;
}