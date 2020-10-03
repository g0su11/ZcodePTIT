//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    if (n<2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int a, b;
    cin >> a  >> b;
    if (a < b){
        for(int i = a; i <= b; ++i) {
            if (check(i))
                cout << i << " ";
        }
    }else{
        for(int i = b; i <= a; ++i) {
            if (check(i))
                cout << i << " ";
        }
    }
}
