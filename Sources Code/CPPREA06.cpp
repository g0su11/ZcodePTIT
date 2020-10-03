//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ((getchar()) != '\n');
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i) {
            if (a[i] == a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        }
        for(int i = 0; i < n; ++i) {
            if (a[i])
                cout << a[i] << " ";
        }
        for(int i = 0; i < n; ++i) {
            if (!a[i])
                cout << a[i] << " ";
        }
        cout << endl;
    }
}
