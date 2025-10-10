#include <bits/stdc++.h>
using namespace std;

void displayArr(vector<int>&b,vector<int>&c){
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
    cout<<endl;
}

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    int odd = -1,even = -1;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even = 1;
        else odd = 1;
    }

    if(odd==1 && even==1){
        vector<int>b,c;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        displayArr(b,c);
        return;
    }
    int maxi = a[0];
    vector<int>b,c;

    int equal=1;
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i]){
            equal = 0;
            break;
        }
    }
    if(equal==1){
        cout<<-1<<endl;
        return;
    }


    for(int i=0;i<n;i++) maxi = max(maxi,a[i]);
    for(int i=0;i<n;i++){
        if(a[i]==maxi) c.push_back(a[i]);
        else b.push_back(a[i]);
    }
    displayArr(b,c);
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