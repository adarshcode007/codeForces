#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<long long>prefix(n,1);
    prefix[0] = (arr[0]==2) ? 1 : 0;
    for(int i=1;i<n;i++){
        if(arr[i]==2) prefix[i] = prefix[i-1] + 1;
        else prefix[i] = prefix[i-1];
    }
    
    vector<long long>suffix(n,1);
    suffix[n-1] = (arr[n-1]==2) ? 1 : 0;
    for(int i=n-2;i>=0;i--){
       if(arr[i]==2) suffix[i] = suffix[i+1] + 1;
       else suffix[i] = suffix[i+1];
    }

    for(int i=0;i<n-1;i++){
        if(prefix[i]==suffix[i+1]){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}