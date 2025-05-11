// https://codeforces.com/problemset/problem/579/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long countSetBits(int n)
{
    long long count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main(){
    long long x;
    cin>>x;

    cout<<countSetBits(x);


}