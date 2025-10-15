#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;


    int dig=0;
    int temp = n;
    while(temp){
        dig++;
        temp/=10;
    }

    string s = to_string(n);
    int first_digit = s[0]-'0';
    int ans = 9*(dig-1) + first_digit;
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