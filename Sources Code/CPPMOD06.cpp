//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        ll y,p,newX=0;
        cin>>x>>y>>p;
        for(int i=0 ; i<x.length() ; i++){
            newX = newX * 10 + (x[i] - 48);
            newX %= p;
        }
        ll res=1;
        while (y > 0)
        {
            if (y & 1)
                res = (res*newX) % p;
            y = y>>1;
            newX = (newX*newX) % p;
        }
        cout<<res<<endl;
    }
}
