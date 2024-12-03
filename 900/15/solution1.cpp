#include<bits/stdc++.h>
using namespace std;

void helper(int n,vector<int>&arr){
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int ans=0;
    for(int i=n-2;i>=0;i--){
        // if(arr[i]<(arr[i+1]/2)){
        //     cout<<-1<<endl;
        //     return;
        // }
        while(arr[i]>0 && arr[i]>=arr[i+1]){
            arr[i] = arr[i]/2;
            ans++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            ans = -1;
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        helper(n,arr);
    }
}