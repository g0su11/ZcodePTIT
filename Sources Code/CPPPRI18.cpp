//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
using namespace std;


int main() {
    int test;
    cin >> test;
    while (test--){
        long long m ,n ,a, b, count = 0;
        cin >> m >> n >> a >> b;
        for(int i = m; i <= n; ++i){
            if( i % a == 0 | i % b == 0){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
