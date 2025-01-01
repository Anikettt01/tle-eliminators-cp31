#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(char ch:s) mp[ch]++;
        int count = 0;
        for(auto i:mp){
            if(i.second %2 != 0){
                count++;
            }
        }
        count--;
        if(count <= k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}