#include<bits/stdc++.h>
using namespace std;
 
int helper(int n,int x, vector<int>&arr){
    // if(arr.size()==1) return arr[0];
    int ans=INT_MIN;
    int last=0;
        for(int i=0;i<n;i++){
            int curr = arr[i]-last;
            last = arr[i];
            ans = max(ans,curr);
        }
        ans = max(ans,(x - last)*2);
    return ans;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        
        for(int i=0;i<n;i++) cin>>arr[i];
        
        cout<<helper(n,x,arr)<<endl;
    }
}