#include<bits/stdc++.h>
using namespace std;
 
void helper(int n, vector<int>&arr){
    int mini = *min_element(arr.begin(),arr.end());
    if(arr[0]!=mini) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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