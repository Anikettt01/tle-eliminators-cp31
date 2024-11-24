#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(vector<int>&arr, int n){
    swap(arr[0],arr[1]);
    swap(arr[n-1],arr[0]);
    if(arr[0]==arr[1]) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
         for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
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
        vi arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        helper(arr,n);
        
    }
    
    return 0;
}