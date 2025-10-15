#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    // n^2 * log2(min(a[i],a[j]))
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],arr[j])<=2){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}