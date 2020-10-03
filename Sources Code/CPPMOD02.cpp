//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int a, m, x, check = 0;
        cin >> a >> m;
        for (int i = 0; i < m; ++i) {
            if ( (a * i) % m == 1 ){
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if (!check) cout << "-1" << endl;
    }
}
