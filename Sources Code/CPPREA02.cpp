//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a[100000];
    long long b[100000];
    int test = 0;
    cin >> test;
    while(test--) {
        int n;
        int m;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            b[i] = 0;
        }
        for(int i = 0; i < n; i++){
            if (a[i] != 0){
                b[m] = a[i];
                m++;
            }
        }
        for (int i = 0; i < n; i++)	{
            cout << b[i] << " ";
            m = 0;
        }
        cout << "\n";
    }
    return 0;
}
