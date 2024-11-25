#include<bits/stdc++.h>
using namespace std;

bool helper(vector<int>&arr,int n) {
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])return false;
    }
    return true;
}

int main(){  
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(helper(arr,n) || k>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}