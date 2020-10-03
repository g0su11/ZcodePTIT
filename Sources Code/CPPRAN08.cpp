//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x, temp=0, sum;
        cin >> n >> x;
        int a[n+5];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int MAX = -100000;
        for(int i = 0; i <= n-x; ++i) {
            sum = 0;
            for(int j = i; j < i+x; ++j) {
                sum+=a[j];
            }
            if(sum > MAX){
                MAX = sum;
                temp = i;
            }
        }
        for(int i = temp; i < temp+x; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
