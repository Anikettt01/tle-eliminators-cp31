#include <bits/stdc++.h>
using namespace std;

int helper(int n, int k, vector<int>& colors) {
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i) {
        mp[colors[i]].push_back(i);
    }
    
    int ans = n;
    for (auto& entry : mp) {
        vector<int> gaps;
        vector<int>& positions = entry.second;

        gaps.push_back(positions[0]);
        for (int j = 1; j < positions.size(); ++j) {
            gaps.push_back(positions[j] - positions[j - 1] - 1);
        }
        gaps.push_back(n - positions.back() - 1);
        sort(gaps.begin(), gaps.end());
        int maxGap = gaps.back();
        if (gaps.size() > 1) {
            maxGap = max(gaps.back() / 2, gaps[gaps.size() - 2]);
        }
        ans = min(ans, maxGap);
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << helper(n, k, arr) << endl;
    }
    return 0;
}
