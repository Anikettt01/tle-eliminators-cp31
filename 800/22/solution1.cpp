#include<bits/stdc++.h>
using namespace std;

void helper(){
    int n,k;
    cin>>n>>k;
    if(n%k == 0){
        cout<<"YES"<<endl;
        return;
    }
    while(n>k){
        n-=k;
        if(n%2 ==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return 0;
}