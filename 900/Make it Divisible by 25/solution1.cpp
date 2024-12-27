#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int minStepsToMakeDivisibleBy25(const string &n) {
    int steps = INT_MAX; 
    for (const string &pair : {"25", "50", "75", "00"}) {
        int lastDigit = -1;  
        int secondLastDigit = -1;
        for (int i = n.size() - 1; i >= 0; i--) {
            if (lastDigit == -1 && n[i] == pair[1]) {
                lastDigit = i;
            }
            else if (lastDigit != -1 && n[i] == pair[0]) {
                secondLastDigit = i;
                break;
            }
        }
        
        if (secondLastDigit != -1) {
            steps = min(steps, (int)n.size() - secondLastDigit - 2);
        }
    }
    
    return steps;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        string n;
        cin >> n;
        cout << minStepsToMakeDivisibleBy25(n) << endl;
    }
    return 0;
}
