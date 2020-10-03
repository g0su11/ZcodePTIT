//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,res = 1;
        cin >> n;
        for(int i = 2; i <= n; ++i) {
            res = (res*i)/gcd(res, i);
        }
        cout << res << endl;
    }
}
