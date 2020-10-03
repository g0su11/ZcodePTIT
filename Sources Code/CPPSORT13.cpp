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
        long long a[n+1], b[m+1], c[m+n+2];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            c[i] = a[i];
        }
        for(int j = 0; j < m; ++j) {
            cin >> b[j];
            c[j+n] = b[j];
        }
        sort(c, c+m+n);
        for(int k = 0; k < m+n; ++k) {
            cout << c[k] << " ";
        }
        cout << endl;
    }
}
