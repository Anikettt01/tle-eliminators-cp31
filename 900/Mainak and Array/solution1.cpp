#include<bits/stdc++.h>
using namespace std;

void helper(){	
	int n;
	cin>>n;

	int arr[n];
	int ans = INT_MIN;

	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	for(int i = 0; i < n; ++i){
		ans = max(ans, arr[(i - 1 + n) % n] - arr[i]);
	}
	for(int i = 1; i < n; ++i){
		ans = max(ans, arr[i] - arr[0]);
	}
	for(int i = 0; i < n - 1; ++i){
		ans = max(ans, arr[n - 1] - arr[i]);
	}
	cout << ans << endl;
}

int main(){

	int tt;
	cin>>tt;
	while(tt--){
        helper();
    }
}