#include <bits/stdc++.h>
using namespace std;

int helper(string &x,string &s,int n,int m){
    int ans=0;
    while(x.find(s)==string::npos){
        
            ans++;
            x+=x;
            if( (x.find(s)== string::npos) && (x.size()>s.size()*2)) return -1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        cout<<helper(x,s,n,m)<<endl;
    }   
    return 0;
}