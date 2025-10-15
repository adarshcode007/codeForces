#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int maxi=arr[0],mini=arr[0];
    int maxInd=0,minInd=0;
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            maxInd = i;
        }
        if(arr[i]<mini){
            mini = arr[i];
            minInd = i;
        }
    }
    if(maxi==mini){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        cout<<maxi<<" "<<mini<<" ";
        for(int i=0;i<n;i++){
            if(i!=maxInd && i!=minInd)
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}