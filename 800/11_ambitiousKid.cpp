#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mini = min(mini, abs(arr[i]));
    }
    cout<<mini<<endl;
}

int main(){
    int t;
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}