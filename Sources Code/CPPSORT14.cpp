//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, res = 0;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int j = 0; j < n-1; ++j) {
            if(a[j] != a[j+1]){
                res+=(a[j+1]-a[j]-1);
            }
        }
        cout << res << endl;
    }
}
