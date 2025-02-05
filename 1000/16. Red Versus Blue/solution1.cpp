#include<bits/stdc++.h>
using namespace std;

void helper(int n,int r, int b){
    int divide = r / (b+1);
    int extra = r % (b+1);
    string ans;
    for(int i=0;i<b+1;i++){
        ans+=string(divide+(i<extra ? 1 : 0),'R');
        if(i<b) ans+='B';
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    std::cin >> t;
    
    while(t--) {
        int n,r,b;
        cin>>n>>r>>b;
        helper(n,r,b);
    }
    
    
    return 0;
}
