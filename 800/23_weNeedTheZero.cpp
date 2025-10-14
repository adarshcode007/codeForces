#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int xorr = 0;
    for(int i=0;i<n;i++) xorr = xorr^arr[i];
    
    if(n%2==1){
        cout<<xorr<<endl;
    } else{
        if(xorr==0) cout<<arr[n-1]<<endl;
        else cout<<-1<<endl;
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