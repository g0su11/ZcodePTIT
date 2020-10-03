//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, L ,R, fuck = 1;
        cin >> n ;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cin >> L >> R;
        for(int j = L; j < R; ++j) {
            if(a[j+1] < a[j]){
                if (j+1==R){
                    break;
                } else{
                    for(int i = j+1; i <= R; ++i) {
                        if(a[i] < a[i+1]){
                            fuck = 0;
                            break;
                        }
                    }
                }
            }
            if(!fuck)
                break;
        }
        if (fuck) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
