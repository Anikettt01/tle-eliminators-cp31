#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void helper(vector<ll>&arr,int n){
    if(n==2){
        cout<<"YES"<<endl;
        return;
    }
    // unordered_map<int,int>mp;
    unordered_set<int>st;
    for(int i:arr) st.insert(i);
    if(st.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    else{
        if(st.size()==1){
            cout<<"YES"<<endl;
            return;
        }
        
        else{
            vll vec(2);
            int index=0;
            for(auto i:st) vec[index++] = i ;
            int count1 = count(arr.begin(),arr.end(),vec[0]);
            int count2 = count(arr.begin(),arr.end(),vec[1]);
            if(abs(count1-count2) > 1){
                cout<<"NO"<<endl;
                return;
            }
            else{
                cout<<"YES"<<endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vll arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        helper(arr,n);
    }
    
    return 0;
}