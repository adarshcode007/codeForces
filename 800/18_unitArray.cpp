#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1) y++;
        else x++;
    }

    // -1 -1 -1 1 1 1 1
    int ans=0;
    while(x>y){
        x--;
        y++;
        ans++;
    }
    if(x<y){
        if(x%2==0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans+1<<endl;
        }
    }
    else if(x==y){
        if(x%2==1){
            cout<<ans+1<<endl;
            return;
        }
        else{
            cout<<ans<<endl;
            return;
        }
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