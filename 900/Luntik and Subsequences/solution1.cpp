#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void tleApproach(int index,vector<ll>&arr,vector<ll>&temp,vector<vector<ll>>&res){
    if(index==arr.size()){
        res.push_back(temp);
        return;
    }
    tleApproach(index+1,arr,temp,res);
    temp.push_back(arr[index]);
    tleApproach(index+1,arr,temp,res);
    temp.pop_back();
}

ll tleApproach2(int index, ll currentSum, vector<ll>& arr, ll targetSum, map<pair<int, ll>, ll>& memo) {
    if (index == arr.size()) {
        return (currentSum == targetSum) ? 1 : 0;
    }
    pair<int, ll> key = {index, currentSum};
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }
    ll ways = tleApproach2(index + 1, currentSum, arr, targetSum, memo);
    ways += tleApproach2(index + 1, currentSum + arr[index], arr, targetSum, memo);
    return memo[key] = ways;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // vector<vector<ll>>res;
        // vector<ll>temp;
        // tleApproach(0,arr,temp,res);
        // ll ans=0;
        // ll totalSum = accumulate(arr.begin(),arr.end(),0LL);
        // for(int i=0;i<res.size();i++){
        //     ll sum = accumulate(res[i].begin(),res[i].end(),0LL);
        //     if(sum==totalSum-1){
        //         ans++;
        //     }
        // }
        // ll targetSum = totalSum - 1;
        
        // map<pair<int, ll>, ll> memo;
        // ll ans = tleApproach2(0, 0, arr, targetSum, memo);
        ll zeroCount = count(arr.begin(), arr.end(), 0);
        ll oneCount = count(arr.begin(), arr.end(), 1);
        ll ans = pow(2, zeroCount)*oneCount;
        cout<<ans<<endl;
    }
    
    return 0;
}