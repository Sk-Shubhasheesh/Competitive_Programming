// https://codeforces.com/contest/514/problem/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    string ans = "";

    for(int i=0; i<x.size(); i++){
        char current_value = x[i];
        int covertStrToInt = current_value-'0';
        int invert= 9 - covertStrToInt; 
        ans+= (min(covertStrToInt, invert) + '0');
    }
    // corner case 1 -- remove initial zero ut put insted of 9
   if(ans[0]=='0'){
     ans[0]='9';
   }
    
   cout<<ans<<"\n";

    return 0;
}