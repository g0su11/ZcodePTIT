//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b, long long c) {
    long long ans = 1;
    for(int i = 1; i <= b; i++) {
        ans *= a;
        ans %= c;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, y, p;
        cin >> x >> y >> p;
        cout << power(x, y , p) << endl;
    }
}
