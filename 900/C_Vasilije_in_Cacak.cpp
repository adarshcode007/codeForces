#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;

    long long small = 0, large = 0;
    for(int i=0;i<k;i++){
        small += i+1;
        large += n-i;
    }
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