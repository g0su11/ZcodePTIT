//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int j = n-1; j > n-1-x; --j) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
