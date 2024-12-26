#include <bits/stdc++.h>
using namespace std;

void helper(){
    int a,b,n;
    cin>>a>>b>>n;
    long long ans = b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans += min(a-1,x);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    
}