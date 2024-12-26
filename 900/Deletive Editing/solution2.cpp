#include <bits/stdc++.h>
using namespace std;

bool canFormTargetWord(const string& initial, const string& target) {
    if (target.length() > initial.length()) {
        return false;
    }
    
    vector<pair<char, bool>> chars;
    for (char ch : initial) {
        chars.push_back({ch, true});
    }
    
    for (char ch : target) {
        int targetCount = count(target.begin(), target.end(), ch);
        int initialCount = count(initial.begin(), initial.end(), ch);
        
        if (initialCount < targetCount) {
            return false;
        }
        
        if (initialCount > targetCount) {
            int toKeep = targetCount;
            for (auto& pair : chars) {
                if (pair.first == ch) {
                    pair.second = false;
                }
            }
            for (int i = chars.size() - 1; i >= 0 && toKeep > 0; i--) {
                if (chars[i].first == ch) {
                    chars[i].second = true;
                    toKeep--;
                }
            }
        }
    }
    
    for (auto& pair : chars) {
        if (pair.second && target.find(pair.first) == string::npos) {
            pair.second = false;
        }
    }
    
    string ans;
    for (auto& pair : chars) {
        if (pair.second) {
            ans += pair.first;
        }
    }
    
    return ans == target;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    while (n--) {
        string initial, target;
        cin >> initial >> target;        
        cout << (canFormTargetWord(initial, target) ? "YES" : "NO") << endl;
    }
    
    return 0;
}