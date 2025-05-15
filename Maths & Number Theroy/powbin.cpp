#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findPow(int a, int b){
    // base case - means if power is zero then we return 1
    if(b==0){
        return 1;
    }
    if(b==1) return a;
   
    // recursive 
    int x = findPow(a, b/2);
     int ans = 0;
    // if power is odd like 5 power 7 then =  5^3*5^3*5  
    if(b%2==1){
       ans = x*x*a; 
    }else{
        ans = x*x;
    }
    return ans;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<findPow(a,b);
}