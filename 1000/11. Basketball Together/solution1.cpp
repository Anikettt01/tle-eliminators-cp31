#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // cout<<"Hello"<<endl;
    long long n,d;
    cin>>n>>d;
    vector<long long>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int left = -1;
    int right = n-1;
    int ans=0;
    int curr = arr[right];
    while(left<right){
        int maxValue = arr[right];
        if(curr <= d){
            // ans++;
            left++;
            curr += maxValue;
        } 
        else{
            ans++;
            right--;
            if(right >= 0) curr = arr[right];
        }
        // else if(n>=3){
        //     left++;
        //         int start = 3;
        //         while(arr[right] * start <= d && left < right){
        //             start++;
        //             left++;
        //         }
        //         if(arr[right]*start > d){
        //             left++;
        //             ans++;
        //             right--;
        //         }
        // }
        // else{
        //     left++;
        //     int team_power = arr[right];
        //     while(left <= right && arr[right] * (right - left + 1) <= d) {
        //         right--;
        //     }
        //     ans++;
        // }
        
    }
    cout<<ans<<endl;
    return 0;
}