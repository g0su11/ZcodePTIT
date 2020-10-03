//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, check = 0, res = 0;
        cin >> n;
        int a[n+5];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        int temp = a[0];
        for(int j = 1; j < n; ++j) {
            if(a[j] > temp){
                res = a[j];
                check = 1;
                break;
            }
        }
        if (check){
            cout << temp << "  " << res << endl;
        }else{
            cout << -1 << endl;
        }
    }
}
