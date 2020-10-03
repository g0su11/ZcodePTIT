//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x, count = 0;
        cin >> n >> x;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] == x) count++;
        }
        if(count) cout << count << endl;
        else cout << -1 << endl;
    }
}
