//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include<bits/stdc++.h>
using namespace std;
int m,s;
int a[1005];
void solve(){
    if(m==1 && s==0){
        cout << "0 0";
        return;
    }
    if(s>m*9 || s==0){
        cout << "-1 -1";
        return;
    }
    int st=s;
    for(int i = 1; i <= m; ++i) {
        a[i] = 0;
    }
    for(int i = m; i >= 1 ; --i) {
        for(int j = 9; j >= 0; --j) {
            if (st - j >= 0){
                a[i] = j;
                st-=j;
                break;
            }
        }
        if (a[i] == 0) break;
    }
    if (a[1] == 0){
        a[1] = 1;
        for(int j = 2; j <= m; ++j) {
            if (a[j] != 0){
                a[j]-=1;
                break;
            }
        }
    }
    for(int i=1; i<=m; i++)
        cout << a[i];
    cout << " ";
    st = s;
    for(int i = 1; i <= m; ++i) {
        a[i] = 0;
    }
    for(int i = 1; i <= m; ++i) {
        for(int j = 9; j >= 0; --j) {
            if (st - j >= 0){
                a[i] = j;
                st-=j;
                break;
            }
        }
        if (a[i] == 0) break;
    }
    for(int i=1; i<=m; i++)
        cout << a[i];
}
int main(){
    cin>>m>>s;
    solve();
    return 0;
}
