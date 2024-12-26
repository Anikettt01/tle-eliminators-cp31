#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        // TLE

        // for(int i=0;i<q;i++){
        //     long long l,r,k;
        //     cin>>l>>r>>k;
        //     long long sum=accumulate(arr.begin(),arr.end(),0);
        //     for(int i=l-1;i<r;i++){
        //         sum-=arr[i];
        //         sum+=k;
        //     }
        //     if(sum&1) cout<<"YES"<<endl;
        //     else cout<<"NO"<<endl;
        // }
        vector<long long>prefixSum(n+1,0);
        for(int i=1;i<=n;i++){
            prefixSum[i] = prefixSum[i-1]+arr[i-1];
        }
        long long total = prefixSum[n];
        for(int i=0;i<q;i++){
            long long l,r,k;
            cin>>l>>r>>k;
            long long givenRangeSum = prefixSum[r]+prefixSum[l-1];
            long long newSum = total - givenRangeSum + (r-l+1)*k;

            if(newSum&1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}