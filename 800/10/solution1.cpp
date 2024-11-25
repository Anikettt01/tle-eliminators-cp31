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
        vector<vector<char>>vec(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>vec[i][j];
            }
        }
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int count4 = 0;
        int count5 = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(i==0 || i==9 || j==0 || j==9){
                    if(vec[i][j] == 'X') count1++;
                }
                else if(i==1 || i==8 || j==1 || j==8){
                    if(vec[i][j] == 'X') count2++;
                }
                else if(i==2 || i==7 || j==2 || j==7){
                    if(vec[i][j] == 'X') count3++;
                }
                else if(i==3 || i==6 || j==3 || j==6){
                    if(vec[i][j] == 'X') count4++;
                }
                else if(i==4 || i==5 || j==4 || j==5){
                    if(vec[i][j] == 'X') count5++;
                }
            }
        }
        int ans = count1+(count2*2)+(count3*3)+(count4*4)+(count5*5);
        cout<<ans<<endl;
    }
    return 0;
}