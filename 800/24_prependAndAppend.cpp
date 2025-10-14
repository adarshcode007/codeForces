#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n==1){
        cout<<1<<endl;
        return;
    }
    int start=0,end=n-1;
    while((s[start]=='1'&&s[end]=='0') || (s[start]=='0'&&s[end]=='1')){
        n=n-2;
        start++;
        end--;
    }
    if(n<0) cout<<0<<endl;
    else cout<<n<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}