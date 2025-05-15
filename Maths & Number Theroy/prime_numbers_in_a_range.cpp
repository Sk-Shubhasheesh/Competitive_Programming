#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// optimization of Code
bool checkPrime(int n){
    if(n==0 || n==1) return false;

    // between 2 to n-1 there is no factor
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            // not prime
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    for(int i =1; i<=n; i++){
        if(checkPrime(i)){
            cout<<i<< " ";

        }
    }



}
