//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int d[1000000];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1][n+1];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        for(int k = 0; k < n; ++k) {
            for(int i = 0; i < n; ++i) {
                if(i == 0 || i == n-1 || k == n-1|| k == 0){
                    cout << a[k][i] << " ";
                }else{
                    cout << " " << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
