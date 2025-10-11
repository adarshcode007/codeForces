#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans=0;
    int zero = 0;
    int i=0,j=0;
    while(i<n && j<n){
        if(arr[j]==0){
            ans = max(ans,j-i+1);
            j++;
            zero=1;
        }
        else{
            j++;
            i=j;
        }
    }
    if(zero==0) ans=0;
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