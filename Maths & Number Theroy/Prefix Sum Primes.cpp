#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == 1) ones++;
        else twos++;
    }
    // if no two is present means all number is one
    if (twos == 0){
        for(int i = 0; i<ones; i++)cout<<"1 ";
    }
    // if no one is present means all number is two
    else if (ones == 0){
            for(int i = 0; i<twos; i++) cout<<"2 ";
    }
    else{
        cout<<"2 1 ";
        for (int i = 0; i<twos-1; i++) cout <<"2 ";
        for (int i = 0; i<ones-1; i++)cout <<"1 ";
    }
    return 0;
}