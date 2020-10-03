//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
#include <cmath>
using namespace std;
bool check(long long n){
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n) ; ++i) {
        if( n % i == 0) return false;
    }
    return true;
}
int main() {
    int test;
    cin >> test;
    while (test--){
        long long a, b, count = 0;
        cin >> a >> b;
        for(int i = sqrt(a); i <= sqrt(b); ++i){
            if(check(i)){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
