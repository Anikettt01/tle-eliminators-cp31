#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void helper(){
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll xOR = 0;
    for (int i = 0; i < n; i++)
        xOR = (arr[i] ^ xOR);
        
    if (xOR == 0) cout << 0 << endl;
    else if (n & 1) cout << xOR << endl;
    else cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) 
    {
        helper();
    }

}