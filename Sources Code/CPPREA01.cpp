//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, count = 0, check = 0;
        cin >> n;
        long long a[n+1],b[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = i;
            if(a[i] < 0)
                count++;
        }
        sort(a, a+n);
        cout << endl;
        for(int j = 0; j < n; ++j) {
            for(int i = count; i < n; ++i) {
                if (b[j] == a[i]){
                    check = 1;
                }
            }
            if (check == 1)
                cout << b[j] << " ";
            else
                cout << "-1" << " ";
            check = 0;
        }
        cout << endl;
    }
}
