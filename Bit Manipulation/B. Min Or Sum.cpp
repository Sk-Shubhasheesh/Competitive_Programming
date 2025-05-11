// https://codeforces.com/contest/1635/problem/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int x=0;
    for(int i=0; i<n;i++){
        int y;
        cin>>y;
        x |= y;
    }
    cout<<x<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}