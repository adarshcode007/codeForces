#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }

    if(k==1 || (k==2 && n%2==1)){
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++) cout<<2<<" ";
    }
    else{
        cout<< (n-3)/2 + 1<<endl;
        cout<<3<<" ";
        for(int i=0;i<(n-3)/2;i++) cout<<2<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}