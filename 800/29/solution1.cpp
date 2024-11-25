#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll arr(n);
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        stack<pair<ll, bool>> st; 
        int operations = 0;
        st.push({arr[0], arr[0] % 2 != 0});
        
        for (int i = 1; i < n; i++) {
            bool isOdd = arr[i] % 2 != 0;
            while (!st.empty() && st.top().second == isOdd) {
                ll topVal = st.top().first;
                st.pop();
                arr[i] *= topVal;
                isOdd = arr[i] % 2 != 0;
                operations++;
            }
            st.push({arr[i], isOdd});
        }

        cout << operations << endl;
    }
    return 0;
}
