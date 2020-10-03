//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
//        if (IsDESC1(a, n))
//            cout << -1 << endl;
//        else{
        int Max = -1;
        for(int i = n-1; i > 0; --i) {
            for(int j = 0; j < i; ++j) {
                if(a[i] - a[j] > Max)
                    Max = a[i]-a[j];
            }
        }
        cout << Max << endl;
    }
}
