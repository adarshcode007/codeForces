#include <bits/stdc++.h>
using namespace std;

void displayPointsMat(vector<vector<int>>&points){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<points[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(){
    vector<vector<char>>mat(10,vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>mat[i][j];
        }
    }
    
    // you could have created the points matrix manually ;(
    // points[][] = [[1,1,1,1,1,1,1,1,1,1],[1,2,2,2,2,2,2,2,2,1]]
    vector<vector<int>>points(10,vector<int>(10,0));
    int point = 1;
    int x = 0, y = 9;
    for(int i=0;i<5;i++){
        for(int j=x;j<=y;j++){
            points[i][j] = point;
        }
        point++;
        x++; y--;
    }
    point = 5;
    x = 4;
    for(int i=5;i<10;i++){
        for(int j=i;j>=x;j--){
            points[i][j] = point;
        }
        x--;
        point--;
    }

    point = 1;
    x = 0, y = 9;
    for(int j=0;j<5;j++){
        for(int i=x;i<=y;i++){
            points[i][j] = point;
        }
        point++;
        x++; y--;
    }
    point = 5;
    x = 4;
    for(int j=5;j<10;j++){
        for(int i=j;i>=x;i--){
            points[i][j] = point;
        }
        x--;
        point--;
    }

    int ans = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(mat[i][j]=='X') ans += points[i][j];
        }
    }
    cout<<ans<<endl;

    // displayPointsMat(points);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}