#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findPowMod(int a, int b, int m){
    // base case - means if power is zero then we return 1
    if(b==0){
        return 1;
    }
    if(b==1) return a;
   
    // recursive 
    int x = findPowMod(a, b/2, m)%m;
     int ans = 0;
    // if power is odd like 5 power 7 then =  5^3*5^3*5  
    if(b%2==1){
       ans = (x%m*x%m)%m; 
       ans  = (ans%m * a%m)%m;
    }else{
        ans = x*x;
    }
    return ans;

}
int main(){
    int a,b;
    cin>>a>>b;
    int m = 100;
    cout<<findPowMod(a,b, m);
}