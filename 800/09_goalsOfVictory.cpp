#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n-1;i++) cin>>arr[i];
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }
    cout<<-sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}