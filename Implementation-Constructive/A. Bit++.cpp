// https://codeforces.com/problemset/problem/282/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkStatement(string statement){
    // increment = true, decrement = false
    if(statement=="X++" || statement=="++X"){
        return true;
    } else{
        return false;
    }
}

int main(){
    int n; // number of the statements
    cin>>n;

    int x = 0; // initial value of x is 0
    for(int i=0;i<n; i++){
        string statement;
        cin>>statement;
        if(checkStatement(statement)){
            x++;
        } else{
            x--;
        }
    }
    cout<<x<<"\n";

    return 0;
}
