//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    if(n==1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if( n % i == 0 )
            return false;
    }
    return true;
}

int main() {
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            if(check(i))
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
