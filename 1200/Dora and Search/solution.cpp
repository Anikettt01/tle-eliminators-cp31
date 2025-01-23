#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vll a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int left = 0;
        int right = n-1;
        int mini = 1;
        int maxi = n;
        while(left<=right){
            if(a[left] == mini){
                left++;
                mini++;
            }
            else if(a[left] == maxi){
                left++;
                maxi--;
            }
            else if(a[right] == mini){
                right--;
                mini++;
            }
            else if(a[right] == maxi){
                right--;
                maxi--;
            }
            else{
                break;
            }
        }
        if(left<=right){
            cout<<1+left <<" "<<right+1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    
    return 0;
}