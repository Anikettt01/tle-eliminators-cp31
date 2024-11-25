#include<bits/stdc++.h>
using namespace std;

int helper(string &s,int n){
    int countDot = count(s.begin(),s.end(),'.');
    int consecutiveThree = 0;
    if(s.find("...") != string::npos) return 2;
    return countDot;
}

int main(){  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<helper(s,n)<<endl;
    }
}