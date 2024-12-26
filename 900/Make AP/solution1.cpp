#include<bits/stdc++.h>
using namespace std;

void helper(int a,int b,int c) {
    int nextA = b - (c - b);
    if(nextA >= a && nextA % a == 0 && nextA != 0) {
        cout << "YES"<<endl;
        return;
    }

    int nextB = a + (c - a)/2;
    if(nextB >= b && (c-a)%2 == 0 && nextB % b == 0 && nextB != 0) {
        cout << "YES"<<endl;
        return;
    }

    int nextC = a + 2*(b - a);
    if(nextC >= c && nextC % c == 0 && nextC != 0) {
        cout << "YES"<<endl;
        return;
    }

    cout << "NO"<<endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        helper(a,b,c);

    }
    return 0;
}