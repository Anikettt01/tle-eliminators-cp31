#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vll arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] < 0) arr[i]*=-1;
    } 
    cout<<*min_element(arr.begin(),arr.end());
    return 0;
}