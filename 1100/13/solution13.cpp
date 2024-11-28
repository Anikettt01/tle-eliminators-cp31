
#include <bits/stdc++.h>
using namespace std;
              
int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
   int ans=0;
   int gcd=0;
   int i=0;
   int j=n-1;
    while(i<j)
    {  
        int ele=abs(arr[i]-arr[j]);

        ans=__gcd(ans,ele);
        i++;
        j--;
    }
    cout<<ans<<endl;

   }
return 0;
 }