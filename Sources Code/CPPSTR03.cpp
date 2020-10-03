//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int r = 0;
        for(int i = 0; i < s.size(); i++) {
            r = (2 * r + (s[i] - '0')) % 5;
        }
        if(r == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
