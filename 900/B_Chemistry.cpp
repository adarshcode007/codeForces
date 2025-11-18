#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<int>freq(26,0);
    int size = s.size();
    for(int i=0;i<size;i++){
        freq[s[i]-'a']++;
    }

    // palindrome - even freq, 1 odd freq
    int odd = 0, changes=0;
    for(int i=0;i<26;i++){
        if(freq[i]%2==1){
            if(odd){
                changes++;
            }
            odd = 1;
        }
    }
    if(changes<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}