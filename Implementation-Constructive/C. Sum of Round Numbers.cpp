// https://codeforces.com/problemset/problem/1352/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>rounds;
    vector<int>v;
    v.push_back(10);
    v.push_back(100);
    v.push_back(1000);
    v.push_back(10000);
    v.push_back(100000);
    for(int i =0; i<v.size(); i++){
        if(n%v[i]!=0){
            rounds.push_back(n%v[i]);
            n -=(n%v[i]);
        }
    }
    cout<<rounds.size()<<"\n";
    for(int i=0; i<rounds.size(); i++){
        cout<<rounds[i]<<" ";
    }
    cout<<"\n";

   
}


int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
}