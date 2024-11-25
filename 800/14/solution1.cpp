#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(int a,int b, int c){
    if(c%2 != 0){
        if(a<b) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    else{
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        helper(a,b,c);
    }
    return 0;
}