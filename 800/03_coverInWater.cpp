#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=0;
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            x++;
        }
        else{
            if(x>=3){
                cout<<2<<endl;
                return;
            }
            ans+=x;
            x=0;
        }
    }
    if(x>=3){
        cout<<2<<endl;
        return;
    }else ans+=x;
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