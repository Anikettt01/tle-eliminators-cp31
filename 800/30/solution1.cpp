#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int before10 = 10;
        int before100 = 9;
        int before1000=9;
        int before10000=9;
        int before100000=9;
        int before1000000=9;
        if(n<=10) cout<<n<<endl;
        else if(n<=100){
            int x = n/10;
            cout<<10+x-1<<endl;
        }
        else if(n<=1000){
            int x = n/100;
            cout<<x+before100+before10-1<<endl;
        } 
        else if(n<=10000){
            int x = n/1000;
            cout<<x+before1000+before100+before10-1<<endl;
        } 
        else if(n<=100000){
            int x = n/10000;
            cout<<x+before10000+before1000+before100+before10-1<<endl;
        }
        else{
            int x = n/100000;
            cout<<x+before100000+before10000+before1000+before100+before10-1<<endl;
        }
    }
    return 0;
}