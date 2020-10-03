//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>

using namespace std;

int const N = 10001;
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
    int test;
    cin >> test;
    snt();
    while (test--){
        int m, n;
        cin >> m >> n;
        for( int i = m; i <= n; i++){
            if (check[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
