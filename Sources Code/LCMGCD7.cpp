//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b){
    if(b==0) return a;
    return GCD(b, a%b);
}

long long LCM(long long a, long long b){
    return (a*b)/GCD(a, b);
}

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long res = LCM(x, y);
        res = LCM(res, z);
        long long k = pow(10, n-1) / res;
        if(res * k == pow(10, n-1)){
            cout << res * k << endl;
        }else if (res * (k+1) < pow(10, n)-1){
            cout << res * (k+1) << endl;
        }else{
            cout << -1 << endl;
        }
    }
}
