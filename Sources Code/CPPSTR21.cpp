//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while ((getchar()) != '\n');
    while (t--){
        string s;
        long long res = 0;
        cin >> s;
        sort(s.begin(), s.end());
        for(char i : s) {
            if (i > 57){
                cout << i;
            }
        }
        for(char i : s) {
            if(i > 47 && i < 58){
                res+=i-'0';
            }
        }

        cout << res << endl;
    }
}
