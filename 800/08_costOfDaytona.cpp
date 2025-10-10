#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>freq(101,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    string fl = freq[k]>0 ? "YES": "NO";
    cout<<fl<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}