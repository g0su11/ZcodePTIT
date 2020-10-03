//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n-1; ++i) {
            cin >> a[i];
        }
        for(int j = 0; j < n-2; ++j) {
            if(a[j+1] - a[j] != 1){
                cout << a[j]+1 << endl;
                break;
            }
        }
    }
}
