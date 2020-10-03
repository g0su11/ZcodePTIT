//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, sumA, sumB;
        cin >> n;
        int a[n+1], b[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(int j = 0; j < n; ++j) {
            cin >> b[j];
        }
        int MAX = 1;
        for(int k = 0; k < n-1; ++k) {
            sumA = a[k];
            sumB = b[k];
            for(int i = k+1; i < n; ++i) {
                sumA+=a[i];
                sumB+=b[i];
                if (sumA == sumB && i-k+1 > MAX) MAX = i-k+1;
            }
        }
        cout << MAX << endl;
    }
}
