#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(n-arr[i]+1);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}