//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
#include <cmath>

using namespace std;
int const N = 10003;
long long check[N];

void snt(){
    for (long long i = 0; i < N; i++) {
        check[i] = 1;
    }
    check[0] = check [1] = 0;
    for (long long i = 2; i <= sqrt(N); i++) {
        if(check[i] == 1){
            for (long long j = i*i; j < N; j+=i) {
                check[j] = 0;
            }
        }
    }
}

int main() {
    long long test;
    cin >> test;
    snt();
    while(test--){
        long long n;
        cin >> n;
        for (long long i = 1; i <= n/2; i++) {
            if( check[i] == 1 && check[n-i] == 1){
                cout << i << " " << n-i << "\n";
                break;
            }
        }
    }
    return 0;
}
