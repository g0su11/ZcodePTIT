//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <iostream>
using namespace std;

int main() {
    int a[100005], b[100005];
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        b[0] = a[0] * a[1];
        b[n-1] = a[n-1] * a[n-2];
        for(int i = 1; i < n-1; ++i){
            b[i] = a[i-1] * a[i+1];
        }
        for (int j = 0; j < n; ++j) {
            cout << b[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
