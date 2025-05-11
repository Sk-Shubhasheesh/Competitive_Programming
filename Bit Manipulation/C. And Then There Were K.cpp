// https://codeforces.com/problemset/problem/1527/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int x = n;
    while(x>0){
        n = n-1;
        x =x & n; 
    }
    cout<<n<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}