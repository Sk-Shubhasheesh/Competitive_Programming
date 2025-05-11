#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string val;
    cin>>val;
    int n = val.size();
    int p = 1; // first value of the rigtmost bit will be always 1
    int decimal = 0;
    for(int i=n-1; i>=0; i--){
        if(val[i] == '1'){
            decimal +=p;
        }
        p = p*2;

    }
    cout<<decimal<<"\n";
}