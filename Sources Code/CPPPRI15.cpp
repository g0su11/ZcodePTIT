//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    if( n == 1 ) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        cout << "1" << " ";
        for (int i = 1; i <= n; ++i) {
            if( i % 2 == 0){
                cout << "2" << " ";
            }else if(check(i)){
                cout << i << " ";
            } else{
                for (int j = 2; j <= i; ++j) {
                    if(check(j) && i % j == 0){
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
