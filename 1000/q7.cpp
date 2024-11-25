#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);
        set<int> s;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            s.insert(b[i]);
        }

         map<int,int> mp1 , mp2;

         int cnt = 1;

         mp1[a[0]] = 1;

         for(int i = 1;i < n;i++){
            if(a[i] == a[i-1]){
               cnt++;
            }
            else{
               cnt = 1;
            }
            mp1[a[i]] = max(mp1[a[i]] , cnt);
         }

         int cnt2 = 1;
         mp2[b[0]] = 1;

         for(int i = 1;i < n;i++){
            if(b[i] ==b[i-1]){
               cnt2++;
            }
            else{
               cnt2 = 1;
            }
            mp2[b[i]] = max(mp2[b[i]] , cnt2);
         }

         int ans = 1;
         for(auto e : s){
             ans = max(ans , mp1[e] + mp2[e]);
         }

         cout << ans << endl;
    }

    return 0;
}