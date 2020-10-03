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
        sort(a, a+n);
        if (n % 2 == 0){
            for(int i = 0; i < n/2; ++i) {
                cout << a[n-i-1] << " " << a[i] << " ";
            }
        }else{
            for(int i = 0; i < n/2; ++i) {
                cout << a[n-i-1] << " " << a[i] << " ";
            }
            cout << a[n/2];
        }
        cout << endl;
    }
}
