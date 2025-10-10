#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>copyArr = arr;
    sort(begin(copyArr),end(copyArr));
    if(copyArr==arr){
        cout<<"YES\n";
        return;
    }
    else if(k==1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}