#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // vector<int>arr(n);
        int ans=0;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            ans = __gcd(ans,abs(i-a));
        } 
        // int ans=0;  
        // for(int i=0;i<n;i++){
        //     ans == __gcd(ans,abs(arr[i]-i-1));
        // }
        cout<<ans<<endl;
    }
}