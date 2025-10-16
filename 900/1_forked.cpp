#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;

    set<pair<long long,long long>> king_attack_spots;
    
    long long dx[] = {a,a,-a,-a,b,b,-b,-b};
    long long dy[] = {b,-b,b,-b,a,-a,a,-a};
    
    for(int i=0;i<8;i++){
        king_attack_spots.insert({xk+dx[i],yk+dy[i]});
    }
    
    set<pair<long long,long long>> queen_attack_spots;
    for(int i=0;i<8;i++){
        queen_attack_spots.insert({xq+dx[i],yq+dy[i]});
    }

    int ans = 0;
    for(auto spot: queen_attack_spots){
        if(king_attack_spots.count(spot)){
            ans++;
        }
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