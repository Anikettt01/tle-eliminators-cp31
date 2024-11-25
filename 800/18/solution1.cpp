#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int x,k;
        cin>>x>>k;
        int curr = x;
        if(curr%k != 0){
            cout<<1<<endl;
            cout<<curr<<endl;
        }
        else{
            int move1 = x-1;
            // while(move1%k != 0){
            //     curr--;
            // }
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }
    return 0;
}