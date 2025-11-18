#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long>tools;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tools.push_back(x);
    }

    long long ans = b;
    for(int i=0;i<n;i++){
        ans += min(a-1,tools[i]);
    }
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