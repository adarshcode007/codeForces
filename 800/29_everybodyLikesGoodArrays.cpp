#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int operations=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]%2==arr[i]%2){
        operations++;
        }
    }
    cout<<operations<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}