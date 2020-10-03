//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;

int merge(int n){
    int res=0;
    while (n > 0){
        res+=n%10;
        n/=10;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, res;
        cin >> n;
        res = merge(n);
        while (res > 9){
            res = merge(res);
        }
        cout << res << endl;
    }
}

