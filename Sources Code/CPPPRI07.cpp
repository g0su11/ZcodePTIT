//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if ( n % i == 0){
            n /= i;
            count++;
        }
        if ( n % i == 0) return false;
    }
    if ( n != 1 ) count++;
    return count == 3;
}

int main() {
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        if(check(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
