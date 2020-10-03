//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        long long n , k, sum = 0;
        cin >> n >> k;
        sum = n*(n + 1) / 2;
        if ( sum == k ) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
