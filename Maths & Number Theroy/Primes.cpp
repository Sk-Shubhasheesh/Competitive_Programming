// https://codeforces.com/problemset/gymProblem/102267/B?mobile=true


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
    if(checkPrime(n-2)){
        cout<<"2 "<<n-2<<"\n";
    } else{
        cout<<"-1\n";
    }


}
