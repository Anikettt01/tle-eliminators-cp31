#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>& arr, int n) {
    bool hasZero = false;
    int left = -1;
    int right = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) hasZero = true;
        if (arr[i] != 0) {
            if (left == -1) left = i;
            right = i;
        }
    }
    if (left == -1) return 0;
    for (int i = left; i <= right; ++i) {
        if (arr[i] == 0) return 2;
    }

    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << helper(arr,n)<<endl;
    }

    return 0;
}
