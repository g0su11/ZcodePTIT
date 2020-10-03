//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> k >> n;
        int a[k*n+1];
        for(int i = 0; i < k*n; ++i) {
            cin >> a[i];
        }
        sort(a, a+k*n);
        for(int j = 0; j < k*n; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
