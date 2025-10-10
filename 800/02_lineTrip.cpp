#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int gas;
    unordered_set<int>gasSt(n);
    for(int i=0;i<n;i++){
        cin>>gas;
        gasSt.insert(gas);
    }
    int fuel=0,maxFuel=0;
    for(int i=0;i<=k;i++){
        if(gasSt.find(i)!=gasSt.end()){
            maxFuel = max(maxFuel,fuel);
            fuel=1;
        }
        else{
            fuel++;
        }
    }
    for(int i=k-1;i>=0;i--){
        if(gasSt.find(i)!=gasSt.end()){
            maxFuel = max(maxFuel,fuel);
            fuel=1;
        }
        else{
            fuel++;
        }
    }
    cout<<maxFuel<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}