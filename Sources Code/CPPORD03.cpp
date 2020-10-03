//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n*n+1];
        for(int i = 0; i < n*n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n*n);
        cout << a[k-1] << endl;
    }
}
