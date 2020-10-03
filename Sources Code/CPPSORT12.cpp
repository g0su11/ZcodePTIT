//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        long long a[n+1], b[m+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(int j = 0; j < m; ++j) {
            cin >> b[j];
        }
        sort(a, a+n);
        sort(b, b+m);
        cout << a[n-1]*b[0] << endl;
    }
}
