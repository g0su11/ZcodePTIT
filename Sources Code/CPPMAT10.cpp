//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n+1][m+1], b[n+1][m+1];
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                cin >> a[i][j];
                b[i][j] = 1;
            }
        }
        for(int k = 1; k <= n; ++k) {
            for(int i = 1; i <= m; ++i) {
                if(a[k][i] == 1 && b[k][i] == 1){
                    for(int j = 1; j <= m; ++j) {
                        if(a[k][j] != 1){
                            a[k][j] = 1;
                            b[k][j] = 0;
                        }
                    }
                    for(int l = 1; l <= n; ++l) {
                        if (a[l][i] != 1){
                            a[l][i] = 1;
                            b[l][i] = 0;
                        }
                    }
                }
            }
        }
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
