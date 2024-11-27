#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;  
        cin>>n;
        string s;  
        cin>>s;
        vector<bool> firstOccurance(26, false); 
        int singleChar = 0; 
        int distinctStrCounter = 0;
        for (int i = 0; i < n; ++i) {
            int element = s[i] - 'a';
            if (!firstOccurance[element]) {
                singleChar++;
                firstOccurance[element] = true;
            }
            distinctStrCounter += singleChar;
        }
        cout << distinctStrCounter << endl;
    }
}
