//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main (){
    int t;
    cin >> t;
    while (t--){
        int l, r, count = 0;
        cin >> l >> r;
        for(int i = l; i <= r; ++i) {
            if (isPrime(i))
                count++;
        }
        cout << count << endl;
    }
}
