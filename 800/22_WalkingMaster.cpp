#include <bits/stdc++.h>
using namespace std;

void solve(){
    int source_x,source_y,destination_x,destination_y;
    cin>>source_x>>source_y>>destination_x>>destination_y;

    if(destination_y<source_y){
        cout<<-1<<endl;
        return;
    }

    int moves = destination_y - source_y;
    source_x += moves;
    if(source_x < destination_x){
        cout<<-1<<endl;
        return;
    }

    moves += (source_x-destination_x);
    cout<<moves<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}