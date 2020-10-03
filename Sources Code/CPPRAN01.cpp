//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, p;
        cin >> n >> p;
        int a[n+1];
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        while (p--){
            int L, R, res =0;
            cin >> L >> R;
            for(int i = L; i <= R; ++i) {
                res+=a[i];
            }
            cout << res << endl;
        }
    }
}
