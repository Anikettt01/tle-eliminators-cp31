#include <bits/stdc++.h>
using namespace std;
 
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b; 
        cin >> a >> b;
        int x1, y1;
        cin >> x1 >> y1;
        int x2,y2;
        cin>>x2>>y2;
        set<pair<int, int>> s1, s2;
        for(int i = 0; i < 4; i++){
            s1.insert({x1+dx[i]*a, y1+dy[i]*b});
            s2.insert({x2+dx[i]*a, y2+dy[i]*b});
            s1.insert({x1+dx[i]*b, y1+dy[i]*a});
            s2.insert({x2+dx[i]*b, y2+dy[i]*a});
        }
        int ans = 0;
        for(auto x : s1){
            if(s2.find(x) != s2.end()) ans++;
        }
        cout << ans <<endl;
    }
}