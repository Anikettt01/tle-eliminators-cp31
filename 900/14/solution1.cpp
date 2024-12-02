#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==0 && n>=4){
            if(n%6==0)cout<<n/6;
            else cout<<n/6+1;
            cout<<" ";
            cout<<n/4;
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}