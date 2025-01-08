#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(s.size() == 1) {
            cout << 1 << endl;
            continue;
        }
        int count0 = count(s.begin(), s.end(), '0');
        int count1 = s.size() - count0;
        if(count0 == 0 || count1 == 0) {
            cout << 0 << endl;
            continue;
        }
        int i=0;
        while(i<s.size()){
            if(s[i]=='1'){
                if(count0) count0--;
                else break;
            }
            else{
                if(count1) count1--;
                else count0--;
            }
            i++;
        }
        cout<<s.size()-i<<endl;
    }
    
    return 0;
}