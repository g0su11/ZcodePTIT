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
        int fuck = 0;
        cin >> s;
        for(int i = 0; i < s.size()-1;) {
            int res = 0;
            if (s[i] < 58 && s[i] > 47){
                res = res * 10 + (s[i]-48);
                i++;
                while (s[i] < 58 && s[i] > 47){
                    res = res * 10 + (s[i]-48);
                    i++;
                }
            }else{
                i++;
            }
            if(res > fuck) fuck = res;
        }
        cout << fuck << endl;
    }
}
