#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    //base
    if(b==0) return a;
    // recursive
    return gcd(b,a%b);


}

int main(){   
    int a ,b;
    cin>>a>>b;
    cout<<gcd(a,b);

}
