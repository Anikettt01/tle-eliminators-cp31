#include<bits/stdc++.h>
using namespace std;

void helper(string &s,string &t){
        string ans="";
        int a[30],i;
        memset(a,0,sizeof(a));
        for(i=0;i<t.size();i++)
        {
            int x = t[i]-'A';
            a[x]++;
        }

        for(i=s.size()-1;i>=0;i--)
        {
            int x = s[i]-'A';
            if(a[x])
            {
                ans+= s[i];
                a[x]--;
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        // int n;
        // cin>>n;
        string s,t;
        cin>>s>>t;
        helper(s,t);
    }
}