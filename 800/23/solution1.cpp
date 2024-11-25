#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int helper1 = d-b;
        int helper2 = d-b-c+a;
        if(helper1>=0 && helper2>=0) cout<<helper1+helper2<<endl;
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}