#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,k;
    cin>>x>>k;
    
    if(x%k!=0){
        cout<<1<<endl<<x<<endl;
    }
    else{
        // 9 3
        int sum = x-1;
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}