#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define ll long long
#define amax(a, b) a = max(a, b)
#define amin(a, b) a = min(a, b)
#define loop(i, a, b) for (int i = a; i < b; i++)


void solve()
{
    int n;
    cin >> n;
    vi nums(n);
    bool ifallev = true, allodd = true;
    vi a, b;
    loop(i, 0, n)
    {
        cin >> nums[i];
        if (nums[i] & 1)
        {
            ifallev = false;
            b.push_back(nums[i]);
        }
        else
        {
            allodd = false;
            a.push_back(nums[i]);
        }
    }

    if (ifallev || allodd){

        sort(nums.begin(), nums.end());
        if (nums[0] == nums[n - 1]){
            cout << -1 << endl;
        }
        else{
            int cnt = 0;
            vi temp;
            int tempy = nums[0];
            cnt = 1;
            loop(i, 1, n)
            {

                if (nums[i] != tempy)
                    break;
                cnt++;
            }
            cout << cnt << " " << n - cnt << endl;
            loop(i, 0, cnt) cout << nums[i] << " ";
            cout << endl;
            loop(i, cnt, n) cout << nums[i] << " ";
            cout << endl;
        }
    }
    else{
        cout << b.size() << " " << a.size() << endl;
        loop(i, 0, b.size())
        {
            cout << b[i] << " ";
        }
        cout << endl;
        loop(i, 0, a.size())
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // DEBUG MODE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}