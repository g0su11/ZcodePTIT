//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        int res=0;
        for(int i = 0; i < s.size(); ++i) {
            res = res + (s[i] - '0');
        }
        while (res > 9){
            res = merge(res);
        }
        if(res == 9){
            cout << 1 <<endl;
        } else{
            cout << 0 << endl;
        }
    }
}
