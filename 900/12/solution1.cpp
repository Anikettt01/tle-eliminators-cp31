#include<bits/stdc++.h>
using namespace std;

void helper(){	
	int n;
	cin>>n;

	int A[n];
	int ans = -1000000007;

	for(int i = 0; i < n; ++i){
		cin >> A[i];
	}
	for(int i = 0; i < n; ++i){
		ans = max(ans, A[(i - 1 + n) % n] - A[i]);
	}
	for(int i = 1; i < n; ++i){
		ans = max(ans, A[i] - A[0]);
	}
	for(int i = 0; i < n - 1; ++i){
		ans = max(ans, A[n - 1] - A[i]);
	}
	cout << ans << '\n';
}

int main(){

	int tt;
	cin>>tt;
	while(tt--){
        helper();
    }
}