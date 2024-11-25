#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void helper(){
    int n;
        cin>>n;
        vll arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        bool isSorted = true;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                isSorted = false;
                break;
            }
        }
        if(!isSorted){
            cout<<0<<endl;
            return;
        }  
        else{
            ll minDifference = LLONG_MAX;
            for(int i=1;i<n;i++) {
                minDifference = min(minDifference,(arr[i]-arr[i-1]));
            }
            if(minDifference==0 || minDifference ==1){
                cout<<1<<endl;
                return;
            }
            else if(minDifference == 2){
                cout<<2<<endl;
                return;
            }
            else{
                cout<<(minDifference/2)+1<<endl;
                return;
            }
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        helper();
    }
    
    return 0;
}