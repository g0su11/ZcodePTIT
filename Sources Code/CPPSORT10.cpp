//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int check[1005];

void temp(){
    for(int i = 0; i <= 1000; ++i) {
        check[i] = 0;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        temp();
        int n;
        cin >> n;
        while (n--){
            int a;
            cin >> a;
            while (a > 0){
                check[a%10] = 1;
                a/=10;
            }
        }
        for(int i = 0; i <= 1000; ++i) {
            if(check[i] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
}
