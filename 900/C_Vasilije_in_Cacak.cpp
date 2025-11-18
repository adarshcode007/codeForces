#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;

    long long small = 0, large = 0;
    small = (k*(k+1))/2;
    large = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    
    if(small<=x && x<=large) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}