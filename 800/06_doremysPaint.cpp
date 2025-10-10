#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<=2){
        cout<<"YES\n";
        return;
    }
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
        if(hash.size()>2){
            cout<<"NO\n";
            return;
        }
    }
    int diff=0;
    if(hash.size()==1){
        cout<<"YES\n";
        return;
    }
    for(auto it: hash){
        diff = abs(diff-hash[it.first]);
    }
    if(diff<=1) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}