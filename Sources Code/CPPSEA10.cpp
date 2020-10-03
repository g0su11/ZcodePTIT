//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n % i ==0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while ((getchar()) != '\n');
    while (t--){
        int n, temp = 0;
        cin >> n;
        for(int i = 2; i <= n/2; ++i) {
            if(check(i) && check(n-i)){
                cout << i << " " << n-i << endl;
                temp = 1;
                break;
            }
        }
        if (!temp) cout << -1 << endl;
    }
}
