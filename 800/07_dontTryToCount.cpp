#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int cnt=0;
    if(x.find(s)!= string::npos){
        cout<<cnt<<endl;
        return;
    }
    while(x.size()<=50){
        x+=x;
        cnt++;
        if(x.find(s)!= string::npos){
            cout<<cnt<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}