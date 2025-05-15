#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    // base case
    if(n==0) return 1;
    int p=1;
    for(int i =1;i<=n; i++){
        p = p*i;
    }
    return p;
}
int nCrUsingFactorial(int n, int r){
    // if r=0 or r==n both case output 1
    if(r==0||r==n) return 1;
    // if r>n then output will be 0
    if(r>n) return 0;

    return fact(n)/(fact(r)*fact(n-r));

}

int main(){  
    int n, r;
    cin>>n>>r; 
    cout<<nCrUsingFactorial(n, r); 

}

