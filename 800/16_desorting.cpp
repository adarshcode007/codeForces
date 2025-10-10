#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int minDiff = INT_MAX;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<0<<endl;
            return;
        }
        minDiff = min(minDiff, abs(arr[i]-arr[i+1]));
    }

    int ans = (minDiff+1)/2;
    if(minDiff%2==0) ans++;
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}