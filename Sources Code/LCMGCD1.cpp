//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        cout << (a*b)/__gcd(a,b) << " " << __gcd(a,b) << endl;
    }
}
