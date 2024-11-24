#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int helper(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b>=n){
        if(a==n && b==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        int temp=n-a-b;
        if(temp>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return 0;
}